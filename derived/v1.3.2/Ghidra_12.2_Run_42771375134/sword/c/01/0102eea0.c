/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102eea0; name: FUN_0102eea0
 */


void FUN_0102eea0(long param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xb0,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_01031bd0(plVar1);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = *(long *)(param_1 + 0x60);
  *(long **)(param_1 + 0x60) = plVar1;
  if (lVar2 != 0) {
    FUN_01031870(lVar2);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),lVar2,*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)(param_1 + 0x78));
    plVar1 = *(long **)(param_1 + 0x60);
  }
  *(long **)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x70) = 0xb0;
  *(undefined8 *)(param_1 + 0x78) = 8;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *plVar1;
  *plVar1 = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_1 + 0x60);
  lVar2 = *param_4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 8);
  *(long *)(lVar3 + 8) = lVar2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) = *param_5;
  return;
}


