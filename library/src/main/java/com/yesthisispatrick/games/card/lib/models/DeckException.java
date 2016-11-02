package com.yesthisispatrick.games.card.lib.models;

public class DeckException extends Exception {
    public DeckException() {
        super();
    }

    public DeckException(String message) {
        super(message);
    }

    public DeckException(String message, Throwable cause) {
        super(message, cause);
    }

    public DeckException(Throwable cause) {
        super(cause);
    }
}
