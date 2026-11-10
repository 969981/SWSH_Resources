/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e83140; name: FUN_00e83140
 */


long FUN_00e83140(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  byte local_54;
  
  plVar4 = *(long **)PTR_DAT_027194d8;
  plVar5 = *(long **)(*(long *)PTR_DAT_0271e860 + 0xa8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar5;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,0x98,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_00e870e0(lVar2,plVar5);
  *(long **)(lVar2 + 8) = plVar5;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x98;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_68 = 0xcbf29ce484222645;
  uStack_60 = 0xcbf29ce484222645;
  local_78 = *param_1;
  local_70 = *param_2;
  local_58 = 0;
  local_54 = param_4 & 1;
  uVar3 = FUN_00e832d0(lVar2,&local_78);
  lVar1 = FUN_00e1f780(plVar4,uVar3);
  *(undefined8 *)(lVar1 + 0x1a0) = *param_3;
  (**(code **)(*plVar4 + 0x38))(plVar4,1);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return lVar1;
}


