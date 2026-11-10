/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f3240; name: FUN_001f3240
 */


void FUN_001f3240(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  uVar4 = *(undefined4 *)(lVar2 + 0x2210);
  uVar1 = *(uint *)(param_1 + 1) >> 0x1e;
  if ((uVar1 != 3) && ((uVar1 != 2 || (*(char *)(lVar2 + 0x1fb9) == '\0')))) {
    FUN_003be880(uVar4,param_1 + 4,*(undefined8 *)(lVar2 + 0x1178),param_2);
    *(undefined4 *)(param_1 + 0x23) = 0;
    *(undefined4 *)((long)param_1 + 0x114) = uVar4;
    return;
  }
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    lVar3 = FUN_001d1a00(lVar2,*(uint *)(param_1 + 1) >> 0x18 & 0xf);
    lVar2 = *param_1;
    param_1[2] = lVar3;
  }
  *(undefined4 *)(lVar3 + 0x100) = *param_2;
  *(undefined4 *)(lVar3 + 0x104) = param_2[1];
  *(undefined4 *)(lVar3 + 0x108) = param_2[2];
  *(undefined4 *)(lVar3 + 0x10c) = param_2[3];
  *(undefined4 *)(lVar3 + 0x110) = param_2[4];
  *(undefined4 *)(lVar3 + 0x114) = param_2[5];
  *(undefined4 *)(lVar3 + 0x118) = param_2[6];
  FUN_001d1850(lVar2,param_1);
  *(uint *)((long)param_1 + 0x11c) = *(uint *)((long)param_1 + 0x11c) | 0x8000;
  if (*(uint *)(param_1 + 1) >> 0x1e == 2) {
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 0x1fb9) == '\0') goto LAB_001f337c;
  }
  else {
    if (*(uint *)(param_1 + 1) >> 0x1e != 3) {
LAB_001f337c:
      *(undefined4 *)(param_1 + 0x23) = 0;
      *(undefined4 *)((long)param_1 + 0x114) = uVar4;
      FUN_003be770(uVar4,param_1 + 4,1);
      return;
    }
    lVar2 = *param_1;
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = uVar4;
  FUN_001d1850(lVar2,param_1);
  *(uint *)((long)param_1 + 0x11c) =
       *(uint *)((long)param_1 + 0x11c) & 0xf8000000 |
       *(uint *)((long)param_1 + 0x11c) & 0xffffff | 0x5000000;
  return;
}


