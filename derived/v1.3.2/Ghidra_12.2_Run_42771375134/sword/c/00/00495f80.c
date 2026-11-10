/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00495f80; name: FUN_00495f80
 */


undefined8 FUN_00495f80(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x9c) >> 0x11;
  plVar4 = *(long **)(param_1 + 0x20);
  while( true ) {
    if (plVar4 == (long *)0x0) {
      puVar6 = (undefined8 *)(param_1 + 0x30);
      puVar3 = (undefined8 *)*puVar6;
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
        if (puVar3 == (undefined8 *)0x0) {
          return 2;
        }
        *puVar3 = *puVar6;
        *puVar6 = puVar3;
        puVar5 = *(undefined8 **)(param_1 + 0x28);
      }
      else {
        puVar5 = *(undefined8 **)(param_1 + 0x28);
      }
      if (puVar5 == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x20) = puVar3;
      }
      else {
        *puVar5 = puVar3;
        puVar3 = (undefined8 *)*puVar6;
      }
      *(undefined8 **)(param_1 + 0x28) = puVar3;
      *(undefined8 *)(param_1 + 0x30) = *puVar3;
      *puVar3 = 0;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      *(ulong *)(*(long *)(param_1 + 0x28) + 8) = CONCAT44(uVar2,iVar1) & 0x1ffffffff;
      return 1;
    }
    if ((iVar1 == *(int *)(plVar4 + 1)) && ((uint)*(byte *)((long)plVar4 + 0xc) == (uVar2 & 1)))
    break;
    plVar4 = (long *)*plVar4;
  }
  return 1;
}


