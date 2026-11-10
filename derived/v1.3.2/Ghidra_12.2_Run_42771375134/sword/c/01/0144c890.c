/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144c890; name: FUN_0144c890
 */


void FUN_0144c890(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar2 = FUN_01457550();
  uVar2 = FUN_0152d950(lVar4,param_2,uVar2);
  FUN_0144c9b0(uVar2,param_2,param_3);
  lVar3 = FUN_0152d900(lVar4,param_2);
  FUN_0152e190(lVar4,*(undefined1 *)(lVar3 + 0x18));
  lVar3 = FUN_0152d900(lVar4,param_2);
  if ((*(char *)(lVar3 + 1) == '\x02') && (iVar1 = FUN_01452170(param_1,param_2), iVar1 == 0)) {
    FUN_0152e1b0(lVar4,1);
  }
  iVar1 = FUN_01452170(param_1,param_2);
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 4;
  }
  FUN_0152d930(lVar4,param_2,uVar2);
  FUN_0144bb70(param_1,1);
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0144c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


