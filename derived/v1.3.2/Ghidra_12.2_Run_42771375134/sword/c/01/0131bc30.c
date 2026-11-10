/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131bc30; name: FUN_0131bc30
 */


void FUN_0131bc30(undefined8 param_1,long param_2,ulong param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  ulong local_48;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_2 + 0x10) + 0x54) == 0) {
    return;
  }
  fVar8 = (float)param_1;
  if ((*(long *)(param_2 + 0x10) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_2 + 0x10) + 0x60), puVar6 == (undefined8 *)0x0)) {
    cVar1 = PTR_DAT_02727f50[2];
  }
  else {
    plVar4 = (long *)(**(code **)*puVar6)(puVar6);
    lVar5 = FUN_00c781c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar6 = puVar6 + -10;
        cVar1 = PTR_DAT_02727f50[2];
        pcVar2 = PTR_DAT_02727f50;
        goto joined_r0x0131be30;
      }
    }
    cVar1 = PTR_DAT_02727f50[2];
  }
  puVar6 = (undefined8 *)0x0;
  pcVar2 = PTR_DAT_02727f50;
joined_r0x0131be30:
  if (((cVar1 != '\0') && (0.0 < fVar8)) && (*(char *)(param_2 + 0xd) != '\0')) {
    PTR_DAT_02727f50 = pcVar2;
    return;
  }
  local_70 = 0xa5969c5652ac3ff4;
  pcStack_68 = "fi_move_speed";
  local_60 = 0xd;
  local_58 = 0;
  PTR_DAT_02727f50 = pcVar2;
  if (*(long *)(param_2 + 0x10) == 0) goto LAB_0131bd9c;
  if (*(int *)(*(long *)(param_2 + 0x10) + 0x54) != 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_0131bd58:
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x10) + 0x60);
      if (puVar7 != (undefined8 *)0x0) {
        plVar4 = (long *)(**(code **)*puVar7)(puVar7);
        lVar5 = FUN_00c781c0();
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)lVar5) {
            puVar7 = puVar7 + -10;
            goto LAB_0131bd5c;
          }
        }
        goto LAB_0131bd58;
      }
    }
LAB_0131bd5c:
    local_48 = FUN_0069d160(puVar7,&local_70);
    if ((local_48 & 0xff) != 0) {
      FUN_0069d190(param_1,puVar7,&local_48);
    }
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
LAB_0131bd9c:
  if (((*pcVar2 == '\0') && ((param_3 & 1) == 0)) || (fVar8 != 0.0)) {
    FUN_0069c580(puVar6,1);
  }
  else {
    FUN_0069c580(puVar6,0);
  }
  if (((fVar8 == 0.0) && (pcVar2[1] != '\0')) && (uVar3 = FUN_0131ccf0(param_2), (uVar3 | 1) == 3))
  {
    FUN_0069c550(0x40a00000,puVar6);
  }
  return;
}


