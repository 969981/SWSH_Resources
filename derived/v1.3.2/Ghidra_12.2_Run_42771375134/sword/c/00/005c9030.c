/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c9030; name: FUN_005c9030
 */


bool FUN_005c9030(char *param_1,char *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) &&
       ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7]))))))))
     && ((param_1[8] == param_2[8] &&
         (((((param_1[9] == param_2[9] && (param_1[10] == param_2[10])) &&
            (param_1[0xb] == param_2[0xb])) &&
           ((param_1[0xc] == param_2[0xc] && (param_1[0xd] == param_2[0xd])))) &&
          (param_1[0xe] == param_2[0xe])))))) {
    return param_1[0xf] == param_2[0xf];
  }
  return false;
}


