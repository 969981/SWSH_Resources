/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b510; name: FUN_0093b510
 */


undefined1 FUN_0093b510(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = (ulong)*(byte *)(param_1 + 0x4c);
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined8 *)((long)param_2 + 0x42) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (uVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar7 = 0;
    do {
      while (*(byte *)(param_1 + 0x4c) <= uVar7) {
        FUN_008e1600(0);
        uVar7 = uVar7 + 1;
        if (uVar7 == uVar6) goto LAB_0093b60c;
      }
      lVar5 = *(long *)(param_1 + uVar7 * 8);
      uVar3 = FUN_008e1600(lVar5);
      if (((uVar3 & 1) == 0) && (lVar5 != 0)) {
        uVar3 = (ulong)*(byte *)((long)param_2 + 0x4c);
        if (uVar3 < 5) {
          if (*(byte *)((long)param_2 + 0x4c) != 0) {
            uVar4 = 0;
            do {
              if (param_2[uVar4] == lVar5) goto LAB_0093b5e8;
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar3);
          }
          param_2[uVar3] = lVar5;
          *(undefined1 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x4c) + 0x3c) = 0;
          *(undefined2 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x4c) * 2 + 0x28) = 0;
          *(undefined2 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x4c) * 2 + 0x32) = 0;
          bVar1 = *(char *)((long)param_2 + 0x4c) + 1;
          *(byte *)((long)param_2 + 0x4c) = bVar1;
          if (*(byte *)((long)param_2 + 0x4d) < bVar1) {
            *(byte *)((long)param_2 + 0x4d) = bVar1;
          }
        }
      }
LAB_0093b5e8:
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
LAB_0093b60c:
    uVar2 = *(undefined1 *)((long)param_2 + 0x4c);
  }
  return uVar2;
}


