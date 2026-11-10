/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e07230; name: FUN_00e07230
 */


undefined8 FUN_00e07230(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_2a0 [576];
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  puVar3 = *(uint **)(*(long *)(lVar5 + 0x2a8) + 400);
  piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
  iVar2 = iRam0000000000000000;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar4 != 0)) {
    puVar3 = (uint *)((long)piVar1 + uVar4);
    iVar2 = *(int *)((long)puVar3 + (ulong)*puVar3);
  }
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(auStack_2a0,0,0x236);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return 0;
}


