#ifndef WORDS_H
#define WORDS_H

#ifndef ARRAY_LEN
#define ARRAY_LEN(arr) (sizeof(arr) / sizeof(arr[0]))
#endif

const char *words[] = {
    "apple",
    "banana",
    "orange",
    "grape",
    "strawberry",
    "kiwi",
    "pineapple",
    "watermelon",
    "peach",
    "pear",
    "apricot",
    "blueberry",
    "blackberry",
    "raspberry",
    "cherry",
    "plum",
    "mango",
    "lemon",
    "lime",
    "coconut",
    "papaya",
    "cranberry",
    "fig",
    "guava",
    "nectarine",
    "tangerine",
    "persimmon",
    "lychee",
    "dragonfruit",
    "avocado",
    "kiwifruit",
    "passionfruit",
    "melon",
    "grapefruit",
    "peanut",
    "almond",
    "cashew",
    "walnut",
    "pecan",
    "macadamia",
    "pistachio",
    "hazelnut",
    "chestnut",
    "coconut",
    "brazilnut",
    "acorn",
    "hickory",
    "peanutbutter",
    "cucumber",
    "carrot",
    "potato",
    "tomato",
    "lettuce",
    "broccoli",
    "spinach",
    "cabbage",
    "zucchini",
    "asparagus",
    "onion",
    "garlic",
    "ginger",
    "bellpepper",
    "eggplant",
    "cantaloupe",
    "cauliflower",
    "sweetpotato",
    "artichoke",
    "kale",
    "radish",
    "turnip",
    "celery",
    "brusselsprout"
};

const size_t words_count = ARRAY_LEN(words);


const char *words2[] = {
    "cat",
    "dog",
    "fish",
    "bird",
    "lion",
    "tiger",
    "bear",
    "wolf",
    "frog",
    "snake",
    "mouse",
    "horse",
    "sheep",
    "goat",
    "duck"
};

const size_t words2_count = ARRAY_LEN(words2);

#endif /* WORDS_H */

