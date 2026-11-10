/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f18c0; name: FUN_006f18c0
 */


void FUN_006f18c0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + 0x8a0) = 1;
  iVar1 = *(int *)(*(long *)PTR_DAT_02710910 + 0x70);
  if (*(int *)(param_1 + 0xdc) != iVar1) {
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    uVar3 = FUN_006f8300(param_1,iVar1 != 0);
    uVar4 = FUN_006f8380(param_1,iVar1 != 0);
    (**(code **)PTR_DAT_02715778)(uVar7,0,0,uVar3,uVar4);
    *(int *)(param_1 + 0xdc) = iVar1;
  }
  nn::os::GetSystemTick();
  lVar5 = nn::os::ConvertToTimeSpan();
  puVar2 = PTR_DAT_02715500;
  FUN_019a5410(param_1 + 0xe0,param_1 + 0xd8,param_1 + 0x720 + (long)*(int *)PTR_DAT_02715500 * 0x58
               ,param_1 + (long)*(int *)PTR_DAT_02715500 * 0x58 + 2000);
  nn::os::GetSystemTick();
  lVar6 = nn::os::ConvertToTimeSpan();
  *(long *)(param_1 + 0xd0) = lVar6 - lVar5;
  FUN_019a2c20(param_2,param_1 + 0x720 + (long)*(int *)puVar2 * 0x58);
  return;
}


