/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001945d0; name: FUN_001945d0
 */


void FUN_001945d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = 0;
  do {
    while (*(int *)(*param_1 + lVar2 + 8) + 1U < 2) {
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + 0xd8;
      if (lVar2 == 0x4000) {
        return;
      }
    }
    FUN_00194670(param_1,*param_1 + lVar2,param_1[3] + lVar1,*(undefined4 *)((long)param_1 + 0x14),
                 param_3,param_2);
    lVar2 = lVar2 + 0x10;
    lVar1 = lVar1 + 0xd8;
  } while (lVar2 != 0x4000);
  return;
}


