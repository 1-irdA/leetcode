function filter(arr: number[], fn: (n: number, i: number) => any): number[] {

    let res: number[] = [];

    arr.forEach((x, i) => {
        if (fn(x, i)) {
            res.push(x);
        }
    });
    return res;
};