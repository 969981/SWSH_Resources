/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004826e0; name: FUN_004826e0
 */


void FUN_004826e0(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ushort local_34;
  
  while( true ) {
    plVar2 = *(long **)(param_1 + 0x80);
    iVar3 = (int)param_2;
    if (plVar2 != (long *)0x0) {
      if (0 < iVar3 * 0x10000) {
        uVar4 = 0;
        do {
          (**(code **)(*plVar2 + 0x130))(plVar2,1);
          uVar4 = uVar4 + 1;
        } while ((int)(uVar4 & 0xffff) < (int)(short)param_2);
      }
      local_38 = 1;
      local_50[0] = 0;
      local_34 = 0x100;
      local_48 = 0;
      uStack_40 = 0;
      if (0xffff < iVar3) {
        uVar4 = 0;
        do {
          local_34 = local_34 & 0xff00;
          (**(code **)(*plVar2 + 0x120))(plVar2,local_50);
          uVar4 = uVar4 + 1;
        } while ((int)(uVar4 & 0xffff) < iVar3 >> 0x10);
      }
      return;
    }
    if (*(long *)(param_1 + 0x78) == 0) break;
    lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x70);
    *(short *)(lVar1 + 0x96) = *(short *)(lVar1 + 0x96) - (short)param_2;
    lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x70);
    *(short *)(lVar1 + 0x92) = *(short *)(lVar1 + 0x92) - (short)(param_2 >> 0x10);
    param_1 = *(long *)(param_1 + 0x78);
    param_2 = param_2 & 0xffffffff;
  }
  return;
}


