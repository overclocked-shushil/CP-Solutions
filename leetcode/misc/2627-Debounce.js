var debounce = function(fn, t = 1000) {
    let set;
    return function(...args) {
        clearTimeout(set);
        set = setTimeout(() => fn(...args), t);
    }
};