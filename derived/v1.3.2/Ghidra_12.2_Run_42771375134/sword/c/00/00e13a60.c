/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e13a60; name: FUN_00e13a60
 */


void FUN_00e13a60(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
                 ,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long local_68;
  
  puVar5 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2)));
  puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
  lVar6 = (ulong)*puVar5 << 2;
  if ((ulong)*puVar5 != 0) {
    do {
      puVar5 = puVar5 + 1;
      uVar1 = *puVar5;
      plVar4 = *(long **)(param_1 + 0x50);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0xbc0,0x10);
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0xb8))(plVar4);
      }
      FUN_00fa96b0(lVar3,*(undefined8 *)(param_1 + 0x50),param_1 + 0x58,(long)puVar5 + (ulong)uVar1,
                   param_3,param_6,param_4,param_5);
      *(long **)(lVar3 + 8) = plVar4;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0xbc0;
      *(undefined8 *)(lVar3 + 0x20) = 0x10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 == 0) {
        FUN_00dcd540(0,*(undefined8 *)(param_1 + 0x50));
        local_68 = lVar3;
      }
      else {
        plVar4 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_00dcd540(lVar3,*(undefined8 *)(param_1 + 0x50));
        local_68 = lVar3;
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      FUN_00e1d8b0(param_1 + 0xc0,&local_68);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
  }
  return;
}


