/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b770; name: FUN_0093b770
 */


undefined1 FUN_0093b770(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  *(undefined1 *)(param_4 + 8) = 0;
  param_4[9] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  *(undefined8 *)((long)param_4 + 0x42) = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  uVar3 = FUN_008e0a00(param_3);
  bVar2 = *(byte *)(param_1 + 0x4c);
  if ((ulong)bVar2 == 0) {
LAB_0093b890:
    return *(undefined1 *)((long)param_4 + 0x4c);
  }
  uVar8 = 0;
  if (bVar2 != 0) goto LAB_0093b7e4;
LAB_0093b7ec:
  lVar7 = 0;
  do {
    uVar4 = FUN_008e0a00(lVar7);
    uVar5 = FUN_008f9ff0(param_2,uVar3,uVar4);
    if ((lVar7 != 0) && ((uVar5 & 1) == 0)) {
      uVar5 = (ulong)*(byte *)((long)param_4 + 0x4c);
      if (uVar5 < 5) {
        if (*(byte *)((long)param_4 + 0x4c) != 0) {
          uVar6 = 0;
          do {
            if (param_4[uVar6] == lVar7) goto LAB_0093b884;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar5);
        }
        param_4[uVar5] = lVar7;
        *(undefined1 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x4c) + 0x3c) = 0;
        *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x4c) * 2 + 0x28) = 0;
        *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x4c) * 2 + 0x32) = 0;
        bVar1 = *(char *)((long)param_4 + 0x4c) + 1;
        *(byte *)((long)param_4 + 0x4c) = bVar1;
        if (*(byte *)((long)param_4 + 0x4d) < bVar1) {
          *(byte *)((long)param_4 + 0x4d) = bVar1;
        }
      }
    }
LAB_0093b884:
    uVar8 = uVar8 + 1;
    if (uVar8 == bVar2) goto LAB_0093b890;
    if (*(byte *)(param_1 + 0x4c) <= uVar8) goto LAB_0093b7ec;
LAB_0093b7e4:
    lVar7 = *(long *)(param_1 + uVar8 * 8);
  } while( true );
}


