/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bab900; name: FUN_00bab900
 */


void FUN_00bab900(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong local_a8;
  byte local_a0 [64];
  
  lVar5 = *(long *)(param_1 + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x4c8);
  uVar7 = *(undefined8 *)(*(long *)PTR_DAT_0271b300 + 0x28);
  lVar6 = 0;
  do {
    snprintf((char *)local_a0,0x40,"pane_L_btn_search_sub_%02d_P_icon_poke_00",(int)lVar6);
    local_a8 = 0xcbf29ce484222645;
    if (local_a0[0] != 0) {
      local_a8 = 0xcbf29ce484222645;
      pbVar4 = (byte *)((ulong)local_a0 | 1);
      bVar1 = local_a0[0];
      do {
        local_a8 = (local_a8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    uVar2 = FUN_0103bd80(lVar5,&local_a8);
    FUN_0168b110(lVar8 + lVar6 * 0x3e0,uVar7,uVar2,0);
    lVar3 = lVar8 + lVar6 * 0x3e0;
    lVar6 = lVar6 + 1;
    *(undefined1 *)(lVar3 + 0x3c8) = 0;
    *(undefined1 *)(lVar3 + 0x3c1) = 1;
  } while (lVar6 != 0xd);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


