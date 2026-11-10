/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e8900; name: FUN_004e8900
 */


undefined8
FUN_004e8900(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,undefined4 *param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  *param_3 = param_1;
  *param_4 = 0;
  *param_5 = 0x3f800000;
  uVar1 = (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar2 = *(long **)(param_1 + 0x28);
    plVar4 = plVar2;
    do {
      lVar3 = *plVar4;
      if (*(char *)(lVar3 + 0x98) != '\0') {
        uVar1 = FUN_004eb650(lVar3,param_2,param_3,param_4,param_5);
        if ((uVar1 & 1) != 0) {
          return *(undefined8 *)(lVar3 + 0x38);
        }
        plVar2 = *(long **)(param_1 + 0x28);
        uVar1 = (ulong)*(uint *)(param_1 + 0x30);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + uVar1);
  }
  return 0xffffffffffffffff;
}


