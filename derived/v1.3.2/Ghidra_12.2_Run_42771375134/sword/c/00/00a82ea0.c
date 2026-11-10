/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a82ea0; name: FUN_00a82ea0
 */


void FUN_00a82ea0(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((*(long *)(param_1 + 0x928) == 0) && (*(long *)(param_1 + 0x920) != 0)) {
    plVar3 = *(long **)(param_1 + 0xd8);
    local_48 = 0;
    local_50 = 0;
    lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
    if (lVar4 == 0) {
      FUN_0101cb00(0,&local_50);
    }
    else {
      plVar6 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0101cb00(lVar4,&local_50);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    puVar5 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
    uVar1 = *puVar5;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar3;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0x4d0,0x10);
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0xb8))(plVar3);
    }
    FUN_00adc840(lVar2,param_1,plVar3,&local_50,(long)puVar5 + (ulong)uVar1);
    *(long **)(lVar2 + 8) = plVar3;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x4d0;
    *(undefined8 *)(lVar2 + 0x20) = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x928) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x928) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x928) = 0;
    }
    *(long *)(param_1 + 0x928) = lVar2;
    FUN_00adc890(lVar2,param_1 + 0xa40,1,1,0);
  }
  return;
}


