package com.yesthisispatrick.games.card.lib.models;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Deck {
    final static Logger logger = LoggerFactory.getLogger(Deck.class);

    private List<Card> draw, discard;
    private Integer numOfDecks;
    private Boolean includeJokers;
    public static Integer STANDARD_PACK_SIZE = 52;
    public static Integer STANDARD_PACK_SIZE_WITH_JOKERS = 54;

    public Deck() {
        this.numOfDecks = 1;
        this.includeJokers = false;
        try {
            initializeDeck();
        } catch (DeckException de) {
            logger.error("Unable to create Deck", de.getCause());
        }
    }

    public Deck(Integer numOfDecks) {
        this.numOfDecks = numOfDecks;
        this.includeJokers = false;

        try {
            initializeDeck();
        } catch (DeckException de) {
            logger.error("Unable to create Deck", de.getCause());
        }
    }

    public Deck(Integer numOfDecks, Boolean includeJokers) {
        this.numOfDecks = numOfDecks;
        this.includeJokers = includeJokers;
        try {
            initializeDeck();
        } catch (DeckException de) {
            logger.error("Unable to create Deck", de.getCause());
        }
    }

    private void initializeDeck() throws DeckException {
        if (numOfDecks < 1) throw new DeckException("Unable to create draw out of " + numOfDecks + " decks");

        this.draw = new ArrayList<Card>();
        this.discard = new ArrayList<Card>();

        for(int i = 1; i <= numOfDecks; ++i) {
            for(Suit suit : Suit.values()) {
                for ( Rank rank : includeJokers ? Rank.values() : Rank.values() ) {
                    draw.add(new Card(rank, suit));
                }
            }
        }
    }

    private Deck shuffleDeck() {
        discard.addAll(draw);

        Random random = new Random();
        while (discard.size() > 0) {
            draw.add(discard.get(random.nextInt(discard.size())));
        }
        return this;
    }

    public Deck discardCard(Card card) {
        discard.add(card);
        return this;
    }

    public Card drawCard() {
        if (draw.size() == 0) {
            shuffleDeck();
        }

        return draw.get(0);
    }

    public boolean hasJokers() {
        return includeJokers;
    }

    public int drawPileSize() {
        return draw.size();
    }

    public int discardPileSize() {
        return discard.size();
    }

    @Override
    public String toString() {
        return "Deck{" +
                "draw=" + draw +
                '}';
    }
}
