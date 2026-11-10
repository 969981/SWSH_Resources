/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e57170; name: FUN_00e57170
 */


void FUN_00e57170(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar5 == 0)) {
    lVar6 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar5);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00e36b10(param_1,param_2,param_3,lVar6);
  puVar2 = PTR_DAT_0271fb60;
  *param_1 = (long)(PTR_DAT_0271fb60 + 0x10);
  param_1[9] = (long)(puVar2 + 0x250);
  param_1[10] = (long)(puVar2 + 0x290);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 7) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)param_4 + uVar5) != '\0';
    }
  }
  *(bool *)(param_1 + 0xac) = bVar3;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    uVar4 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar4 = *(undefined4 *)((long)param_4 + uVar5);
    }
  }
  *(undefined4 *)((long)param_1 + 0x564) = uVar4;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xb) {
    lVar6 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5];
    lVar6 = 0;
    if (uVar5 != 0) {
      lVar6 = *(long *)((long)param_4 + uVar5);
    }
  }
  param_1[0xad] = lVar6;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xd) {
    lVar6 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6];
    lVar6 = 0;
    if (uVar5 != 0) {
      lVar6 = *(long *)((long)param_4 + uVar5);
    }
  }
  param_1[0xae] = lVar6;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  *(undefined8 *)((long)param_1 + 0x57c) = 0xffffffffffffffff;
  if (param_1[0x34] != 0xcf9069c673b98d1) {
    local_40 = 0x7ffe3345d1fcbdc6;
    local_38 = "bin/field/model/unit_obj/unit_obj_nesuto01/unit_obj_nesuto01.gfbmdl";
    local_30 = 0x43;
    local_28 = 0;
    lVar6 = param_1[0x81];
    param_1[0x7e] = 0x7ffe3345d1fcbdc6;
    param_1[0x7f] = (long)"bin/field/model/unit_obj/unit_obj_nesuto01/unit_obj_nesuto01.gfbmdl";
    param_1[0x80] = 0x43;
    param_1[0x81] = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    FUN_00dd8640(param_1,&local_40,0);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    local_40 = 0x26b4fcc11ec2ccd7;
    local_38 = "bin/field/model/unit_obj/unit_obj_nesuto01/unit_obj_nesuto01.gfbanmcfg";
    local_30 = 0x46;
    local_28 = 0;
    FUN_00dd9600(param_1,&local_40,0);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


