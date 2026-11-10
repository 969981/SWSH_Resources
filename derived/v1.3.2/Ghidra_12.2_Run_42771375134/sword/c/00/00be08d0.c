/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be08d0; name: FUN_00be08d0
 */


undefined8 FUN_00be08d0(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long local_60 [3];
  short local_48;
  char local_46;
  char local_45;
  char local_44;
  char local_43;
  
  lVar12 = *param_2;
  if (lVar12 == 0) {
    return 0;
  }
  plVar11 = (long *)(lVar12 + 0x48);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  if (*(long *)(param_1 + 0x848) != 0x644) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    return 0;
  }
  uVar8 = FUN_009fe850(lVar12,param_1 + 0x48);
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))(plVar11);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  uVar8 = FUN_009fe1a0(*param_2,0x1b);
  uVar4 = FUN_008d3fc0(uVar8,0);
  *(undefined4 *)(param_3 + 0x124) = uVar4;
  FUN_009fef60(local_60,*param_2,2,uVar8 & 0xffffffff);
  uVar9 = FUN_0077d470(local_60[0]);
  FUN_0077d7e0(param_3,uVar9,0x25);
  if (local_60[0] != 0) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
    local_60[0] = 0;
  }
  FUN_009fef60(local_60,*param_2,3,uVar8 & 0xffffffff);
  uVar9 = FUN_0077d470(local_60[0]);
  FUN_0077d7e0(param_3 + 0x92,uVar9,0x25);
  if (local_60[0] != 0) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
    local_60[0] = 0;
  }
  nn::time::ToCalendarTime
            ((CalendarTime *)&local_48,(CalendarAdditionalInfo *)local_60,
             (PosixTime *)(param_1 + 0x38));
  *(undefined4 *)(param_3 + 0x128) = 0;
  *(int *)(param_3 + 300) = (int)local_43;
  *(int *)(param_3 + 0x130) = (int)local_44;
  *(int *)(param_3 + 0x134) = (int)local_45;
  *(int *)(param_3 + 0x138) = local_46 + -1;
  *(int *)(param_3 + 0x13c) = local_48 + -0x76c;
  *(undefined8 *)(param_3 + 0x150) = 0;
  *(undefined8 *)(param_3 + 0x158) = 0;
  *(undefined8 *)(param_3 + 0x140) = 0;
  *(undefined8 *)(param_3 + 0x148) = 0;
  nn::time::ToCalendarTime
            ((CalendarTime *)&local_48,(CalendarAdditionalInfo *)local_60,
             (PosixTime *)(param_1 + 0x40));
  *(undefined4 *)(param_3 + 0x160) = 0;
  *(int *)(param_3 + 0x164) = (int)local_43;
  *(int *)(param_3 + 0x168) = (int)local_44;
  *(int *)(param_3 + 0x16c) = (int)local_45;
  *(undefined8 *)(param_3 + 0x188) = 0;
  *(undefined8 *)(param_3 + 400) = 0;
  *(int *)(param_3 + 0x170) = local_46 + -1;
  *(int *)(param_3 + 0x174) = local_48 + -0x76c;
  *(undefined8 *)(param_3 + 0x178) = 0;
  *(undefined8 *)(param_3 + 0x180) = 0;
  uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)(param_1 + 0x38));
  *(int *)(param_3 + 0x19c) = (int)(char)((ulong)uVar9 >> 0x28);
  *(int *)(param_3 + 0x1a0) = (int)(char)((ulong)uVar9 >> 0x20);
  *(undefined4 *)(param_3 + 0x198) = 0;
  *(int *)(param_3 + 0x1a4) = (int)uVar9 >> 0x18;
  *(int *)(param_3 + 0x1a8) = (((int)uVar9 << 8) >> 0x18) + -1;
  *(int *)(param_3 + 0x1ac) = (short)uVar9 + -0x76c;
  *(undefined8 *)(param_3 + 0x1c0) = 0;
  *(undefined8 *)(param_3 + 0x1c8) = 0;
  *(undefined8 *)(param_3 + 0x1b0) = 0;
  *(undefined8 *)(param_3 + 0x1b8) = 0;
  uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)(param_1 + 0x40));
  *(int *)(param_3 + 0x1d4) = (int)(char)((ulong)uVar9 >> 0x28);
  *(int *)(param_3 + 0x1d8) = (int)(char)((ulong)uVar9 >> 0x20);
  *(int *)(param_3 + 0x1dc) = (int)uVar9 >> 0x18;
  *(undefined4 *)(param_3 + 0x1d0) = 0;
  *(int *)(param_3 + 0x1e4) = (short)uVar9 + -0x76c;
  *(int *)(param_3 + 0x1e0) = (((int)uVar9 << 8) >> 0x18) + -1;
  *(undefined8 *)(param_3 + 0x1f8) = 0;
  *(undefined8 *)(param_3 + 0x200) = 0;
  *(undefined8 *)(param_3 + 0x1e8) = 0;
  *(undefined8 *)(param_3 + 0x1f0) = 0;
  bVar1 = FUN_009ff120(*param_2);
  if (bVar1 < 3) {
    *(undefined4 *)(param_3 + 0x208) = *(undefined4 *)(&DAT_0215a314 + (long)(char)bVar1 * 4);
  }
  uVar2 = FUN_009fe1a0(*param_2,7);
  *(undefined1 *)(param_3 + 0x20c) = uVar2;
  uVar2 = FUN_009fe1a0(*param_2,6);
  *(undefined1 *)(param_3 + 0x20d) = uVar2;
  uVar2 = FUN_009fe1a0(*param_2,0xf);
  *(undefined1 *)(param_3 + 0x20e) = uVar2;
  cVar3 = FUN_009ff0e0(*param_2);
  *(uint *)(param_3 + 0x210) = (uint)(cVar3 != '\0');
  bVar1 = FUN_009fe1a0(*param_2,0x18);
  switch(bVar1) {
  case 0:
    break;
  case 1:
  case 4:
    *(undefined4 *)(param_3 + 0x214) = 0;
    break;
  case 2:
  case 5:
    uVar4 = 1;
    goto LAB_00be0bf0;
  case 3:
  case 6:
    uVar4 = 2;
LAB_00be0bf0:
    *(undefined4 *)(param_3 + 0x214) = uVar4;
    break;
  default:
    if (9 < bVar1) {
      *(undefined4 *)(param_3 + 0x214) = 3;
      lVar12 = *param_2;
      uVar4 = FUN_008d3750();
      FUN_009fef60(local_60,lVar12,0,uVar4);
      uVar9 = FUN_0077d470(local_60[0]);
      FUN_0077d7e0(param_3 + 0x218,uVar9,0x25);
      if (local_60[0] != 0) {
        (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
        local_60[0] = 0;
      }
    }
  }
  iVar5 = FUN_009fe1a0(*param_2,3);
  iVar6 = FUN_009fe1a0(*param_2,2);
  if (iVar5 != iVar6) {
    piVar10 = (int *)(param_3 + 0x288);
    *(int *)(param_3 + 0x284) = iVar6;
  }
  else {
    piVar10 = (int *)(param_3 + 0x280);
  }
  *piVar10 = iVar5;
  *(uint *)(param_3 + 0x27c) = (uint)(iVar5 != iVar6);
  uVar2 = FUN_009fe1a0(*param_2,5);
  *(undefined1 *)(param_3 + 0x290) = uVar2;
  uVar7 = FUN_009ff100(*param_2);
  if ((uVar7 & 0xff) < 6) {
    *(uint *)(param_3 + 0x28c) = uVar7 & 0xff;
  }
  bVar1 = FUN_009ffa40(*param_2);
  *(byte *)(param_3 + 0x291) = bVar1 & 1;
  bVar1 = FUN_009fed30(*param_2,1);
  *(byte *)(param_3 + 0x292) = ~bVar1 & 1;
  bVar1 = FUN_009fed30(*param_2,2);
  *(byte *)(param_3 + 0x293) = ~bVar1 & 1;
  return 1;
}


