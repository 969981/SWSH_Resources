/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012166e0; name: FUN_012166e0
 */


void FUN_012166e0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = param_1[8];
  lVar1 = param_2;
  if (lVar4 != 0) {
    lVar1 = FUN_012127c0(param_1,lVar4,param_4,param_2);
  }
  FUN_01216540(param_1,lVar1,param_7,param_6);
  lVar1 = lVar1 + param_5 * 0x260;
  if (lVar4 != 0) {
    lVar1 = FUN_012127c0(param_1,param_4,lVar4 + param_1[9] * 0x260,lVar1);
    lVar2 = param_1[9];
    if (lVar2 != 0) {
      pcVar3 = (char *)(lVar4 + 0x1b0);
      do {
        if (pcVar3[0x50] != '\0') {
          pcVar3[0x50] = '\0';
        }
        if (*pcVar3 != '\0') {
          *pcVar3 = '\0';
        }
        if (pcVar3[-0xc0] != '\0') {
          pcVar3[-0xc0] = '\0';
        }
        if (pcVar3[-0x114] != '\0') {
          if (pcVar3[-0x10c] != '\0') {
            pcVar3[-0x10c] = '\0';
          }
          pcVar3[-0x114] = '\0';
        }
        if (pcVar3[-0x150] != '\0') {
          pcVar3[-0x150] = '\0';
        }
        if (pcVar3[-0x164] != '\0') {
          pcVar3[-0x164] = '\0';
        }
        if (pcVar3[-0x188] != '\0') {
          pcVar3[-0x188] = '\0';
        }
        if (pcVar3[-0x198] != '\0') {
          pcVar3[-0x198] = '\0';
        }
        lVar2 = lVar2 + -1;
        if (pcVar3[-0x1a0] != '\0') {
          pcVar3[-0x1a0] = '\0';
        }
        pcVar3 = pcVar3 + 0x260;
      } while (lVar2 != 0);
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x260,0x10);
  }
  param_1[8] = param_2;
  param_1[9] = (lVar1 - param_2 >> 5) * -0x79435e50d79435e5;
  param_1[10] = param_3;
  return;
}


