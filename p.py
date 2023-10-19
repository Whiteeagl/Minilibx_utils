
lv = [
    [0, 0, 0, 0],
    [1, 0, 0, 0],
    [1, 0, 0, 0],
    [0, 1, 0, 0],
    [0, 1, 0, 0],
    [0, 0, 1, 0]
]

lv_end = [
    [0, 0, 0, 0],
    [0, 1, 0, 0],
    [0, 1, 0, 0],
    [1, 0, 0, 0],
    [1, 0, 0, 0],
    [0, 0, 0, 0],
]

lw_end = [
    [0, 0, 0, 0],
    [0, 0, 0, 1],
    [0, 0, 0, 1],
    [0, 0, 1, 0],
    [1, 0, 1, 0],
    [0, 1, 0, 0]
]

l_all   = [lw_end]
l_n_all = ["w_end"]


for letter_idx, letter in enumerate(l_all):
    found = 0
    if ("_end" in l_n_all[letter_idx]):
        print(f"\nvoid create_{l_n_all[letter_idx]}(t_icc_letters *icc_l)")
        found = 1
    else:
        print(f"\nvoid create_{l_n_all[letter_idx]}(t_min_letters *min_letters)")
    print("{")
    for idx, x in enumerate(letter):
        for sub_idx, sub_x in enumerate(x):
            if (found):
                print(f"icc_l->{l_n_all[letter_idx]}[{idx}][{sub_idx}] = {sub_x};")
            else:
                print(f"min_letters->{l_n_all[letter_idx]}[{idx}][{sub_idx}] = {sub_x};")
    print("}")

""" 
[0, 0, 0, 0],
    [0, 0, 0, 0],
    [0, 0, 0, 0],
    [0, 0, 0, 0],
    [0, 0, 0, 0],
    [0, 0, 0, 0]
"""