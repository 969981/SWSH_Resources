/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046aca0; name: FUN_0046aca0
 */


void FUN_0046aca0(undefined4 param_1,long param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long local_90;
  int local_88;
  int local_80;
  char local_78;
  char local_70;
  long local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = param_3;
  local_24 = param_1;
  local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)PTR_DAT_02713158);
  pbVar3 = *(byte **)(param_2 + 0x20);
  pbVar4 = pbVar3;
  if (pbVar3 != (byte *)0x0) {
    uVar5 = 0;
    pbVar4 = pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc);
    do {
      if (pbVar3[uVar5 + 1] == 0) goto LAB_0046ad0c;
      uVar5 = uVar5 + 1;
      pbVar4 = pbVar4 + 4;
    } while (uVar5 < *pbVar3);
    pbVar4 = (byte *)0x0;
  }
LAB_0046ad0c:
  pbVar3 = (byte *)&local_60;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = pbVar4;
  }
  iVar1 = *(int *)pbVar3;
  memcpy(&local_90,param_4,0x30);
  if (0 < iVar1) {
    local_68 = 0;
    if (*(char *)((long)param_4 + 0x20) != -1) {
      local_88 = 0;
    }
    if (1 < iVar1) {
      local_70 = -1;
      local_78 = -1;
      local_80 = 0;
      local_88 = 0;
      if (iVar1 != 2) {
        local_90 = 0;
      }
    }
  }
  local_48 = 0xff;
  local_40 = 0xff;
  bVar2 = false;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  if (local_90 == 0) {
    if ((((local_88 == 0) && (local_80 == 0)) && (local_78 == -1)) && (local_70 == -1)) {
      bVar2 = local_68 == 0;
    }
    else {
      bVar2 = false;
    }
  }
  FUN_0046f100(param_2 + 0x38,PTR_LAB_02713160,&local_90,&local_60,&local_60,&local_28,bVar2);
  return;
}


