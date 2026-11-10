/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ff3d0; name: FUN_006ff3d0
 */


void FUN_006ff3d0(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long local_48;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x48;
  }
  FUN_006ffff0(param_1,lVar1,1);
  puVar2 = PTR_DAT_02715898;
  plVar6 = (long *)param_1[1];
  *param_1 = (long)(PTR_DAT_02715898 + 0x10);
  param_1[9] = (long)(puVar2 + 0x68);
  param_1[10] = (long)(puVar2 + 0xa8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,800,0x10);
  if (lVar4 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_006d6c40(lVar4,lVar1,1);
  *(long **)(lVar4 + 8) = plVar6;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 800;
  *(undefined8 *)(lVar4 + 0x20) = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  FUN_006d1120(lVar4);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  pcVar5 = *(code **)(lVar4 + 0x2a8);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0x2b0) = 0;
    *(undefined8 *)(lVar4 + 0x2b8) = 0;
    *(undefined8 *)(lVar4 + 0x2a0) = 0;
    *(undefined8 *)(lVar4 + 0x2a8) = 0;
    (*pcVar5)(lVar4 + 0x2c0);
  }
  *(long *)(lVar4 + 0x2c0) = param_2;
  *(undefined **)(lVar4 + 0x2a0) = PTR_LAB_027158a0;
  *(undefined **)(lVar4 + 0x2a8) = PTR_LAB_027158a8;
  *(undefined **)(lVar4 + 0x2b0) = PTR_LAB_027158b0;
  *(undefined **)(lVar4 + 0x2b8) = PTR_LAB_027158b8;
  local_48 = lVar4;
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  FUN_006d1300(param_1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


