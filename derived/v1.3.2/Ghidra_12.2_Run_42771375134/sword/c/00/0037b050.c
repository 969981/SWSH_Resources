/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0037b050; name: FUN_0037b050
 */


void FUN_0037b050(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_50 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",&local_50);
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,&local_50);
    }
    if ((((uVar3 & 1) != 0) && (local_50 != (char *)0x0)) && (*local_50 != '\0')) {
      if (*local_50 != '\0') {
        FUN_003222d0(&local_60,&local_90,&local_50);
        unaff_w23 = local_90;
        unaff_w22 = uStack_8c;
        unaff_w21 = local_88;
      }
      lVar5 = param_1[6];
      (**(code **)(*(long *)(param_3 + 0x10) + 0x28))(lVar5,&local_70,&local_80);
      if (*(char *)(param_3 + 8) == '\0') {
        pcVar4 = *(code **)(*(long *)(param_3 + 0x10) + 0x20);
        local_50 = (char *)local_70;
        local_48 = local_68;
        local_60 = CONCAT44(unaff_w22,unaff_w23);
        local_58 = unaff_w21;
      }
      else {
        pcVar4 = *(code **)(*(long *)(param_3 + 0x10) + 0x20);
        local_50 = (char *)CONCAT44(unaff_w22,unaff_w23);
        local_60 = local_80;
        local_58 = local_78;
        local_48 = unaff_w21;
      }
      (*pcVar4)(lVar5,&local_50,&local_60);
    }
  }
  return;
}


