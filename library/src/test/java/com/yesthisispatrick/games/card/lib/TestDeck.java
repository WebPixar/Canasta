package com.yesthisispatrick.games.card.lib;

import com.yesthisispatrick.games.card.lib.models.Deck;
import org.junit.Test;
import org.junit.Assert;

/**
 * Created by pa015va on 4/12/16.
 */
public class TestDeck {

    @Test
    public void discardPileShouldBeZeroOnInitialization() {
        Deck deck = new Deck();
        Assert.assertTrue(String.format("When initialized, the discard should have no cards %d", deck.discardPileSize()),
                deck.discardPileSize() == 0);
    }

    @Test
    public void drawPileShouldHaveCardsWhenInitialized() {
        Deck deck = new Deck();
        Assert.assertTrue(String.format("Deck should have standard amount of cards: %d", deck.drawPileSize()),
                deck.drawPileSize() == Deck.STANDARD_PACK_SIZE);
    }
}
