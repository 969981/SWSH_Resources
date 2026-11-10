/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f30fc0; name: FUN_00f30fc0
 */


undefined8 FUN_00f30fc0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  
  lVar1 = *(long *)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  plVar4 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,800,0x10);
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_006d6c40(lVar2,param_1 + 0x48,1);
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 800;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  FUN_006d1120(lVar2);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x390) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x390) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x390) = 0;
  }
  *(long *)(param_1 + 0x390) = lVar2;
  pcVar3 = *(code **)(lVar2 + 0x2a8);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x2b0) = 0;
    *(undefined8 *)(lVar2 + 0x2b8) = 0;
    *(undefined8 *)(lVar2 + 0x2a0) = 0;
    *(undefined8 *)(lVar2 + 0x2a8) = 0;
    (*pcVar3)(lVar2 + 0x2c0);
  }
  *(undefined8 *)(lVar2 + 0x2c0) = *param_2;
  *(undefined **)(lVar2 + 0x2a0) = PTR_LAB_027209d8;
  *(undefined **)(lVar2 + 0x2a8) = PTR_LAB_027209e0;
  *(undefined **)(lVar2 + 0x2b0) = PTR_LAB_027209e8;
  *(undefined **)(lVar2 + 0x2b8) = PTR_LAB_027209f0;
  return *(undefined8 *)(param_1 + 0x390);
}


