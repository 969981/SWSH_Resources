/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00455930; name: FUN_00455930
 */


undefined8 FUN_00455930(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_02712a90;
  plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
  if (plVar3 == (long *)0x0) {
    return 2;
  }
  FUN_00457b70(plVar3,0x1820,0);
  iVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,0xf,*(undefined4 *)(param_1 + 200),0,0);
  if (iVar2 == 1) {
    (**(code **)(*plVar3 + 0x28))(plVar3,(ulong)*(uint *)(param_1 + 0x10) | 0x100000000);
    lVar4 = FUN_00404690(*(undefined4 *)puVar1,0x48);
    if (lVar4 != 0) {
      FUN_0043c780(lVar4,0);
      *(long **)(lVar4 + 8) = plVar3;
      FUN_00438380(*(undefined8 *)PTR_DAT_02712de0,lVar4);
      uVar5 = 1;
      goto LAB_004559f4;
    }
  }
  uVar5 = 2;
LAB_004559f4:
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return uVar5;
}


