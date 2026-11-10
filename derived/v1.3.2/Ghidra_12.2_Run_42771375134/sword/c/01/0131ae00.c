/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131ae00; name: FUN_0131ae00
 */


void FUN_0131ae00(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[8];
  *param_1 = (long)(PTR_DAT_02727f48 + 0x10);
  if (lVar3 != 0) {
    lVar1 = param_1[9];
    if (param_1[9] == lVar3) {
      lVar1 = lVar3;
    }
    else {
      do {
        pcVar2 = *(code **)(lVar1 + -0x78);
        lVar4 = lVar1 + -0x90;
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar1 + -0x70) = 0;
          *(undefined8 *)(lVar1 + -0x68) = 0;
          *(undefined8 *)(lVar1 + -0x80) = 0;
          *(undefined8 *)(lVar1 + -0x78) = 0;
          (*pcVar2)(lVar1 + -0x60);
        }
        lVar1 = lVar4;
      } while (lVar3 != lVar4);
      lVar1 = param_1[8];
    }
    param_1[9] = lVar3;
    (**(code **)(*(long *)param_1[0xb] + 0x18))((long *)param_1[0xb],lVar1,param_1[10] - lVar1,0x10)
    ;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


