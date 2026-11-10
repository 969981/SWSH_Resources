/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103b9e0; name: FUN_0103b9e0
 */


void FUN_0103b9e0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_14;
  
  switch(param_2) {
  case 0:
  case 2:
    lVar1 = *(long *)(param_1 + 0x6a8);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
    }
    FUN_0103b530(param_1,0,*(undefined4 *)(param_1 + 0x654));
    FUN_016d3620(param_1 + 0x888);
    return;
  case 1:
  case 3:
    if (*(code **)(param_1 + 0x6f0) != (code *)0x0) {
      local_14 = param_2;
      (**(code **)(param_1 + 0x6f0))(param_1 + 0x710,&local_14);
    }
  }
  return;
}


