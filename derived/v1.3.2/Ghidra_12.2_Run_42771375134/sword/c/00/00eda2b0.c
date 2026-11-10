/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eda2b0; name: FUN_00eda2b0
 */


void FUN_00eda2b0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  (**(code **)(*plVar5 + 0x68))(plVar5,*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68));
  FUN_01520760(plVar5,4,0x32,1);
  FUN_01520760(plVar5,0x11,1,1);
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  plVar1 = (long *)(lVar6 + 0x48);
  if (lVar6 != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(lVar6 + 0x561);
  uVar4 = *(undefined8 *)(lVar6 + 0x4f4);
  uVar2 = *(undefined4 *)(lVar6 + 0x4fc);
  *(short *)(param_1 + 0x98) = (short)uVar4;
  *(short *)(param_1 + 0xa0) = (short)uVar2;
  *(int *)(param_1 + 0x9c) = (int)((ulong)uVar4 >> 0x20);
  uVar3 = FUN_01520330(plVar5,0);
  uVar4 = *(undefined8 *)(lVar6 + 0x500);
  uVar2 = *(undefined4 *)(lVar6 + 0x508);
  *(undefined2 *)(lVar6 + 0x4fc) = uVar3;
  *(undefined2 *)(lVar6 + 0x4f4) = 0;
  *(undefined4 *)(lVar6 + 0x4f8) = 0;
  *(short *)(param_1 + 0xa4) = (short)uVar4;
  *(short *)(param_1 + 0xac) = (short)uVar2;
  *(int *)(param_1 + 0xa8) = (int)((ulong)uVar4 >> 0x20);
  uVar3 = FUN_01520330(plVar5,1);
  *(undefined2 *)(lVar6 + 0x500) = 0;
  *(undefined4 *)(lVar6 + 0x504) = 0;
  *(undefined2 *)(lVar6 + 0x508) = uVar3;
  uVar4 = *(undefined8 *)(lVar6 + 0x50c);
  *(short *)(param_1 + 0xb8) = (short)*(undefined4 *)(lVar6 + 0x514);
  *(short *)(param_1 + 0xb0) = (short)uVar4;
  *(int *)(param_1 + 0xb4) = (int)((ulong)uVar4 >> 0x20);
  uVar3 = FUN_01520330(plVar5,2);
  uVar4 = *(undefined8 *)(lVar6 + 0x518);
  uVar2 = *(undefined4 *)(lVar6 + 0x520);
  *(undefined2 *)(lVar6 + 0x514) = uVar3;
  *(undefined2 *)(lVar6 + 0x50c) = 0;
  *(undefined4 *)(lVar6 + 0x510) = 0;
  *(short *)(param_1 + 0xbc) = (short)uVar4;
  *(short *)(param_1 + 0xc4) = (short)uVar2;
  *(int *)(param_1 + 0xc0) = (int)((ulong)uVar4 >> 0x20);
  uVar3 = FUN_01520330(plVar5,3);
  *(undefined2 *)(lVar6 + 0x518) = 0;
  *(undefined4 *)(lVar6 + 0x51c) = 0;
  *(undefined2 *)(lVar6 + 0x520) = uVar3;
  uVar4 = *(undefined8 *)(lVar6 + 0x524);
  *(short *)(param_1 + 0xd0) = (short)*(undefined4 *)(lVar6 + 0x52c);
  *(short *)(param_1 + 200) = (short)uVar4;
  *(int *)(param_1 + 0xcc) = (int)((ulong)uVar4 >> 0x20);
  uVar3 = FUN_01520330(plVar5,4);
  uVar4 = *(undefined8 *)(lVar6 + 0x530);
  uVar2 = *(undefined4 *)(lVar6 + 0x538);
  *(undefined2 *)(lVar6 + 0x52c) = uVar3;
  *(undefined2 *)(lVar6 + 0x524) = 0;
  *(undefined4 *)(lVar6 + 0x528) = 0;
  *(short *)(param_1 + 0xd4) = (short)uVar4;
  *(short *)(param_1 + 0xdc) = (short)uVar2;
  *(int *)(param_1 + 0xd8) = (int)((ulong)uVar4 >> 0x20);
  uVar3 = FUN_01520330(plVar5,5);
  *(undefined2 *)(lVar6 + 0x530) = 0;
  *(undefined4 *)(lVar6 + 0x534) = 0;
  *(undefined2 *)(lVar6 + 0x538) = uVar3;
  uVar4 = *(undefined8 *)(lVar6 + 0x53c);
  *(short *)(param_1 + 0xe8) = (short)*(undefined4 *)(lVar6 + 0x544);
  *(short *)(param_1 + 0xe0) = (short)uVar4;
  *(int *)(param_1 + 0xe4) = (int)((ulong)uVar4 >> 0x20);
  uVar3 = FUN_01520330(plVar5,6);
  uVar4 = *(undefined8 *)(lVar6 + 0x548);
  uVar2 = *(undefined4 *)(lVar6 + 0x550);
  *(undefined2 *)(lVar6 + 0x544) = uVar3;
  *(undefined2 *)(lVar6 + 0x53c) = 0;
  *(undefined4 *)(lVar6 + 0x540) = 0;
  *(short *)(param_1 + 0xec) = (short)uVar4;
  *(short *)(param_1 + 0xf4) = (short)uVar2;
  *(int *)(param_1 + 0xf0) = (int)((ulong)uVar4 >> 0x20);
  uVar3 = FUN_01520330(plVar5,7);
  *(undefined2 *)(lVar6 + 0x548) = 0;
  *(undefined4 *)(lVar6 + 0x54c) = 0;
  *(undefined2 *)(lVar6 + 0x550) = uVar3;
  uVar4 = *(undefined8 *)(lVar6 + 0x554);
  *(short *)(param_1 + 0x100) = (short)*(undefined4 *)(lVar6 + 0x55c);
  *(short *)(param_1 + 0xf8) = (short)uVar4;
  *(int *)(param_1 + 0xfc) = (int)((ulong)uVar4 >> 0x20);
  uVar3 = FUN_01520330(plVar5,8);
  *(undefined2 *)(lVar6 + 0x554) = 0;
  *(undefined4 *)(lVar6 + 0x558) = 0;
  *(undefined2 *)(lVar6 + 0x55c) = uVar3;
  *(undefined1 *)(lVar6 + 0x561) = 0;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00eda550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  return;
}


