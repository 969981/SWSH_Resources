/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00965a90; name: FUN_00965a90
 */


undefined4 FUN_00965a90(int param_1,short param_2,uint param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  undefined4 *puVar4;
  
  if ((((param_3 & 1) != 0) && ((param_4 & 1) != 0)) &&
     (uVar3 = FUN_00880c60(param_5), (uVar3 & 1) != 0)) {
    uVar3 = 0;
    puVar4 = &DAT_0214b8d4;
    do {
      if (((puVar4[-2] == param_1) && (*(short *)(puVar4 + -1) == param_2)) &&
         (cVar1 = *(char *)((long)puVar4 + -2), cVar2 = FUN_00880ae0(param_5), cVar1 == cVar2)) {
        return *puVar4;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar3 < 0x2a);
  }
  return 0xffffffff;
}


