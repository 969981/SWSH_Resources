/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb4860; name: FUN_00cb4860
 */


void FUN_00cb4860(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_0271c5d0 + 0x10);
  FUN_00cb4a30(param_1 + 0x2c);
  lVar2 = param_1[0x26];
  if (lVar2 != 0) {
    lVar3 = param_1[0x27];
    if (lVar3 == lVar2) {
      lVar3 = lVar2;
    }
    else {
      do {
        if ((*(long *)(lVar3 + -0x18) != 0) && (*(long *)(lVar3 + -0x30) != 0)) {
          (**(code **)(*(long *)(*(long *)(lVar3 + -0x30) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + -0x30) = 0;
        }
        lVar4 = lVar3 + -0x30;
        *(undefined8 *)(lVar3 + -0x30) = 0;
        *(undefined8 *)(lVar3 + -0x28) = 0xcbf29ce484222645;
        *(undefined1 **)(lVar3 + -0x20) = &DAT_01d38550;
        *(undefined8 *)(lVar3 + -0x18) = 0;
        if (*(long *)(lVar3 + -0x10) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + -0x10) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + -0x10) = 0;
        }
        *(undefined8 *)(lVar3 + -0x10) = 0;
        *(undefined4 *)(lVar3 + -8) = 0;
        lVar3 = lVar4;
      } while (lVar2 != lVar4);
      lVar3 = param_1[0x26];
    }
    param_1[0x27] = lVar2;
    (**(code **)(*(long *)param_1[0x29] + 0x18))
              ((long *)param_1[0x29],lVar3,param_1[0x28] - lVar3,8);
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  param_1[2] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[3] == 0) {
    param_1[3] = 0;
    pcVar1 = (code *)param_1[0x15];
  }
  else {
    FUN_006e2100();
    lVar2 = param_1[3];
    param_1[3] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar1 = (code *)param_1[0x15];
  }
  if (pcVar1 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar1)(param_1 + 0x18);
  }
  pcVar1 = (code *)param_1[5];
  if (pcVar1 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar1)(param_1 + 8);
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


