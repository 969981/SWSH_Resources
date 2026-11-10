/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e447c0; name: FUN_00e447c0
 */


void FUN_00e447c0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  FUN_00db6b80();
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + 0xa0) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(lVar5 + 0xa8) = *(undefined8 *)(param_2 + 0x560);
  plVar1 = *(long **)(param_2 + 0x1f0);
  plVar2 = *(long **)(param_2 + 0x1e8);
  do {
    if (plVar2 == plVar1) {
      local_3c = (undefined4)*(undefined8 *)((long)PTR_DAT_027152c0 + 8);
      uStack_38 = (undefined4)((ulong)*(undefined8 *)((long)PTR_DAT_027152c0 + 8) >> 0x20);
      local_44 = (undefined4)*(undefined8 *)PTR_DAT_027152c0;
      uStack_40 = (undefined4)((ulong)*(undefined8 *)PTR_DAT_027152c0 >> 0x20);
      *(undefined4 *)(lVar5 + 0xb0) = 0;
      *(undefined4 *)(lVar5 + 0xcc) = uStack_38;
      *(ulong *)(lVar5 + 0xc4) = CONCAT44(local_3c,uStack_40);
      *(ulong *)(lVar5 + 0xbc) = CONCAT44(local_44,uStack_48);
      *(undefined8 *)(lVar5 + 0xb4) = local_50;
      *(undefined2 *)(lVar5 + 0xd0) = 0;
      return;
    }
    lVar4 = *plVar2;
    uVar3 = FUN_00df2e00(lVar4 + 0x50);
    plVar2 = plVar2 + 1;
  } while ((uVar3 & 1) == 0);
  FUN_00dee130(lVar4,lVar5 + 0xb0);
  return;
}


