/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c8cd0; name: FUN_007c8cd0
 */


void FUN_007c8cd0(long *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  
  *param_1 = (long)(PTR_DAT_02716c10 + 0x10);
  if (param_1[0xc6] != 0) {
    FUN_006d0420();
    lVar1 = param_1[0xc6];
    param_1[0xc6] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  if (param_1[0xda] != 0) {
    (**(code **)(*(long *)param_1[0xd0] + 0x18))
              ((long *)param_1[0xd0],param_1[0xd8],param_1[0xda] << 2,4);
  }
  plVar2 = (long *)param_1[0xd6];
  if (param_1 + 0xd2 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_007c8d60:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_007c8d60;
  }
  plVar2 = (long *)param_1[0xce];
  if (param_1 + 0xca == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_007c8d90;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_007c8d90:
  if (param_1[0xc6] != 0) {
    (**(code **)(*(long *)(param_1[0xc6] + 0x48) + 0x18))();
    param_1[0xc6] = 0;
  }
  FUN_007b99e0(param_1);
  return;
}


