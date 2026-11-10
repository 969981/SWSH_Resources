/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e54a70; name: FUN_00e54a70
 */


void FUN_00e54a70(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  if ((*(ushort *)((long)param_4 - (long)(int)*param_4) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)param_4 - (long)(int)*param_4))[2], uVar7 == 0)) {
    lVar6 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar7);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00e36b10(param_1,param_2,param_3,lVar6);
  param_1[0xac] = 0;
  puVar5 = PTR_DAT_0271fb18;
  param_1[0xae] = 0;
  param_1[0xb0] = 0;
  param_1[0xb2] = 0;
  param_1[9] = (long)(puVar5 + 0x250);
  param_1[10] = (long)(puVar5 + 0x290);
  param_1[0xd8] = 0x32ffffffff;
  param_1[0xd9] = 0x3c0000004b;
  *(undefined4 *)(param_1 + 0xda) = 0xffffffff;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[0xb4] = 0;
  param_1[0xb6] = 0;
  param_1[0xb8] = 0;
  param_1[0xba] = 0;
  param_1[0xbc] = 0;
  param_1[0xbe] = 0;
  param_1[0xc0] = 0;
  param_1[0xc2] = 0;
  param_1[0xc4] = 0;
  param_1[0xc6] = 0;
  param_1[200] = 0;
  param_1[0xca] = 0;
  param_1[0xcc] = 0;
  param_1[0xce] = 0;
  param_1[0xd0] = 0;
  param_1[0xd2] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  local_40 = 0xdf701f2e5581ecae;
  local_38 = "bin/field/model/unit_obj/unit_obj_kinomitree01/unit_obj_kinomitree01.gfbmdl";
  local_30 = 0x4b;
  local_28 = 0;
  lVar6 = param_1[0x81];
  param_1[0x7e] = -0x208fe0d1aa7e1352;
  param_1[0x7f] =
       (long)"bin/field/model/unit_obj/unit_obj_kinomitree01/unit_obj_kinomitree01.gfbmdl";
  param_1[0x80] = 0x4b;
  param_1[0x81] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  FUN_00dd8640(param_1,&local_40,0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_40 = 0x787833156be6764f;
  local_38 = "bin/field/model/unit_obj/unit_obj_kinomitree01/unit_obj_kinomitree01.gfbanmcfg";
  local_30 = 0x4e;
  local_28 = 0;
  FUN_00dd9600(param_1,&local_40,0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  param_1[0xac] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xae] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xb4] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xb6] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  param_1[0xb8] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  param_1[0xbc] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  param_1[0xbe] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  uVar9 = (ulong)(int)*param_4;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - uVar9)));
  uVar4 = *(uint *)((long)puVar1 + (ulong)*puVar1);
  uVar7 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    lVar6 = 0;
    lVar8 = 0x560;
    while( true ) {
      uVar7 = uVar7 - 1;
      uVar9 = (ulong)*(ushort *)((long)param_4 + (6 - (long)(int)uVar9));
      lVar2 = uVar9 + *(uint *)((long)param_4 + uVar9);
      lVar2 = lVar2 + (ulong)*(uint *)((long)param_4 + lVar6 + lVar2 + 4);
      lVar3 = lVar6 + (lVar2 - *(int *)((long)param_4 + lVar6 + lVar2 + 4));
      if ((*(ushort *)((long)param_4 + lVar3 + 4) < 5) ||
         (uVar9 = (ulong)*(ushort *)((long)param_4 + lVar3 + 8), uVar9 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)((long)param_4 + lVar6 + lVar2 + uVar9 + 4);
      }
      *(undefined8 *)((long)param_1 + lVar8) = uVar10;
      uVar9 = (ulong)*(ushort *)((long)param_4 + (6 - (long)(int)*param_4));
      lVar2 = uVar9 + *(uint *)((long)param_4 + uVar9);
      lVar2 = lVar2 + (ulong)*(uint *)((long)param_4 + lVar6 + lVar2 + 4);
      lVar3 = lVar6 + (lVar2 - *(int *)((long)param_4 + lVar6 + lVar2 + 4));
      if ((*(ushort *)((long)param_4 + lVar3 + 4) < 7) ||
         (uVar9 = (ulong)*(ushort *)((long)param_4 + lVar3 + 10), uVar9 == 0)) {
        *(undefined4 *)((long)param_1 + lVar6 * 4 + 0x568) = 0;
      }
      else {
        *(undefined4 *)((long)param_1 + lVar6 * 4 + 0x568) =
             *(undefined4 *)((long)param_4 + lVar6 + lVar2 + uVar9 + 4);
      }
      if (uVar7 == 0) break;
      uVar9 = (ulong)*param_4;
      lVar6 = lVar6 + 4;
      lVar8 = lVar8 + 0x10;
    }
  }
  param_1[0xc0] = -0x340d631b7bddd9bb;
  param_1[0xc2] = -0x340d631b7bddd9bb;
  param_1[0xc4] = -0x340d631b7bddd9bb;
  param_1[0xc6] = -0x340d631b7bddd9bb;
  param_1[200] = -0x340d631b7bddd9bb;
  param_1[0xca] = -0x340d631b7bddd9bb;
  param_1[0xcc] = -0x340d631b7bddd9bb;
  param_1[0xce] = -0x340d631b7bddd9bb;
  param_1[0xd0] = -0x340d631b7bddd9bb;
  param_1[0xd2] = -0x340d631b7bddd9bb;
  param_1[0xd4] = -0x340d631b7bddd9bb;
  param_1[0xd5] = -0x340d631b7bddd9bb;
  param_1[0xd6] = -0x340d631b7bddd9bb;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)(param_1 + 199) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  local_40 = 0xa558a30804b788eb;
  FUN_00dc07c0(param_1,&local_40,0xffffffff);
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x100;
  return;
}


