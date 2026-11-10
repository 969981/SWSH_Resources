/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932270; name: FUN_00932270
 */


void FUN_00932270(int *param_1,char param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  if ((char)*piVar1 == param_2) {
    return;
  }
  if ((char)*piVar1 != '\x05') {
    piVar1 = (int *)((long)param_1 + 5);
    if (*(char *)piVar1 == param_2) {
      return;
    }
    if (*(char *)piVar1 != '\x05') {
      piVar1 = (int *)((long)param_1 + 6);
      if (*(char *)piVar1 == param_2) {
        return;
      }
      if (*(char *)piVar1 != '\x05') {
        piVar1 = (int *)((long)param_1 + 7);
        if (*(char *)piVar1 == param_2) {
          return;
        }
        if (*(char *)piVar1 != '\x05') {
          piVar1 = param_1 + 2;
          if ((char)*piVar1 == param_2) {
            return;
          }
          if ((char)*piVar1 != '\x05') {
            return;
          }
        }
      }
    }
  }
  *(char *)piVar1 = param_2;
  *param_1 = *param_1 + 1;
  return;
}


