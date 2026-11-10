/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094ad90; name: FUN_0094ad90
 */


void FUN_0094ad90(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  *param_2 = 0;
  if (*(int *)(param_3 + 1) != 0) {
    uVar4 = FUN_009423e0();
    FUN_00928360(uVar4,*param_3,*(undefined4 *)(param_3 + 1));
    iVar1 = *(int *)(param_3 + 1);
    uVar6 = *param_3;
    uVar3 = *(undefined1 *)((long)param_3 + 0xd);
    uVar2 = *(undefined1 *)((long)param_3 + 0xc);
    uVar4 = FUN_009423b0(param_1);
    FUN_00937a20(uVar4,uVar6,-iVar1,uVar2,uVar3,1);
    FUN_008e3830(*param_3,2);
    if ((param_3[2] != 0) && (uVar5 = FUN_00943f10(), (uVar5 & 1) != 0)) {
      uVar4 = FUN_009423b0(param_1);
      FUN_00935bf0(uVar4,param_3[2]);
    }
    uVar3 = FUN_008e0a00(*param_3);
    local_68._0_2_ = CONCAT11(1,uVar3);
    FUN_00942450(param_1);
    uVar4 = FUN_00925140();
    FUN_00944c20(uVar4,auStack_70,&local_68);
    uVar4 = FUN_009423e0(param_1);
    FUN_009283d0(uVar4,*param_3,*(undefined4 *)(param_3 + 1));
    if (*(char *)(param_3 + 3) != '\0') {
      local_68 = *param_3;
      local_58 = 0;
      local_60 = 1;
      FUN_00942450(param_1);
      uVar4 = FUN_009251d0();
      FUN_0094af90(uVar4,auStack_70,&local_68);
    }
    *param_2 = 1;
  }
  return;
}


