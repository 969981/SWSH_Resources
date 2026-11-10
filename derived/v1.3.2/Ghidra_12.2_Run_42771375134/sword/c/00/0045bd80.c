/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045bd80; name: FUN_0045bd80
 */


undefined4
FUN_0045bd80(int *param_1,undefined4 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 local_30 [4];
  undefined8 local_2c;
  
  if (*param_1 != (int)param_4) {
    return 0;
  }
  local_30[0] = 0;
  local_2c = 0;
  if ((int)param_4 == 0) {
    lVar4 = *(long *)(param_1 + 2);
  }
  else if (*(char *)((long)param_1 + 0x12) == '\0') {
    lVar4 = FUN_0045bec0(param_1,*(undefined8 *)(param_1 + 2),param_3,param_4,param_2,param_6,
                         param_7);
  }
  else {
    lVar4 = FUN_0045b920(param_1,param_3,param_4 & 0xffffffff,param_2,param_5,local_30,param_6,
                         param_7);
  }
  if (lVar4 == 0) {
    return 0;
  }
  uVar2 = *(ushort *)(param_1 + 4);
  uVar3 = *(ushort *)(lVar4 + 10);
  if ((99 < uVar2) && (99 < uVar3)) {
    return *(undefined4 *)(lVar4 + 4);
  }
  lVar5 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
  dVar6 = (double)(uint)((ulong)lVar5 >> 0x21) * DAT_01cd5078;
  *(long *)PTR_DAT_02712b80 = lVar5;
  uVar1 = *(undefined4 *)(lVar4 + 4);
  if ((uint)(ushort)(uVar3 * uVar2) <= (uint)(int)dVar6) {
    uVar1 = 0;
  }
  return uVar1;
}


