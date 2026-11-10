/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b17f0; name: FUN_014b17f0
 */


void FUN_014b17f0(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar5 == 0) {
    uVar2 = FUN_01524c50(0,lVar4);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar2 = FUN_01524c50(lVar5,lVar4);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if ((uVar2 & 1) == 0) {
    FUN_00878f70(*param_1,0xe,*param_2);
    FUN_00878f70(*param_1,0xf,param_2[1]);
    FUN_00878f70(*param_1,0x10,*(undefined2 *)(param_2 + 2));
    lVar4 = *param_1;
    uVar1 = param_2[4];
    uVar3 = 0x11;
  }
  else {
    FUN_00878f70(*param_1,10,*param_2);
    FUN_00878f70(*param_1,0xb,param_2[1]);
    FUN_00878f70(*param_1,0xc,*(undefined2 *)(param_2 + 2));
    lVar4 = *param_1;
    uVar1 = param_2[4];
    uVar3 = 0xd;
  }
  FUN_00878f70(lVar4,uVar3,uVar1);
  return;
}


