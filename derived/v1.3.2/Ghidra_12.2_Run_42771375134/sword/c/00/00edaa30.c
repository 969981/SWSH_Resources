/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00edaa30; name: FUN_00edaa30
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00edaa30(long param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar3 = *(long **)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar5 = plVar3 + 9;
  (**(code **)(*plVar5 + 0x10))(plVar5);
  (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined8 *)(param_1 + 0x90));
  (**(code **)(*plVar5 + 0x18))(plVar5);
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  uVar2 = *(undefined2 *)(param_1 + 0xa0);
  *(undefined2 *)(lVar4 + 0x4f4) = *(undefined2 *)(param_1 + 0x98);
  *(undefined4 *)(lVar4 + 0x4f8) = uVar1;
  *(undefined2 *)(lVar4 + 0x4fc) = uVar2;
  *(undefined1 *)(lVar4 + 0x561) = *(undefined1 *)(param_1 + 0x104);
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = *(undefined2 *)(param_1 + 0xac);
  *(undefined2 *)(lVar4 + 0x500) = *(undefined2 *)(param_1 + 0xa4);
  *(undefined4 *)(lVar4 + 0x504) = uVar1;
  *(undefined2 *)(lVar4 + 0x508) = uVar2;
  *(undefined1 *)(lVar4 + 0x561) = *(undefined1 *)(param_1 + 0x104);
  uVar1 = *(undefined4 *)(param_1 + 0xb4);
  uVar2 = *(undefined2 *)(param_1 + 0xb8);
  *(undefined2 *)(lVar4 + 0x50c) = *(undefined2 *)(param_1 + 0xb0);
  *(undefined4 *)(lVar4 + 0x510) = uVar1;
  *(undefined2 *)(lVar4 + 0x514) = uVar2;
  *(undefined1 *)(lVar4 + 0x561) = *(undefined1 *)(param_1 + 0x104);
  uVar1 = *(undefined4 *)(param_1 + 0xc0);
  uVar2 = *(undefined2 *)(param_1 + 0xc4);
  *(undefined2 *)(lVar4 + 0x518) = *(undefined2 *)(param_1 + 0xbc);
  *(undefined4 *)(lVar4 + 0x51c) = uVar1;
  *(undefined2 *)(lVar4 + 0x520) = uVar2;
  *(undefined1 *)(lVar4 + 0x561) = *(undefined1 *)(param_1 + 0x104);
  uVar1 = *(undefined4 *)(param_1 + 0xcc);
  uVar2 = *(undefined2 *)(param_1 + 0xd0);
  *(undefined2 *)(lVar4 + 0x524) = *(undefined2 *)(param_1 + 200);
  *(undefined4 *)(lVar4 + 0x528) = uVar1;
  *(undefined2 *)(lVar4 + 0x52c) = uVar2;
  *(undefined1 *)(lVar4 + 0x561) = *(undefined1 *)(param_1 + 0x104);
  uVar1 = *(undefined4 *)(param_1 + 0xd8);
  uVar2 = *(undefined2 *)(param_1 + 0xdc);
  *(undefined2 *)(lVar4 + 0x530) = *(undefined2 *)(param_1 + 0xd4);
  *(undefined4 *)(lVar4 + 0x534) = uVar1;
  *(undefined2 *)(lVar4 + 0x538) = uVar2;
  *(undefined1 *)(lVar4 + 0x561) = *(undefined1 *)(param_1 + 0x104);
  uVar1 = *(undefined4 *)(param_1 + 0xe4);
  uVar2 = *(undefined2 *)(param_1 + 0xe8);
  *(undefined2 *)(lVar4 + 0x53c) = *(undefined2 *)(param_1 + 0xe0);
  *(undefined4 *)(lVar4 + 0x540) = uVar1;
  *(undefined2 *)(lVar4 + 0x544) = uVar2;
  *(undefined1 *)(lVar4 + 0x561) = *(undefined1 *)(param_1 + 0x104);
  uVar1 = *(undefined4 *)(param_1 + 0xf0);
  uVar2 = *(undefined2 *)(param_1 + 0xf4);
  *(undefined2 *)(lVar4 + 0x548) = *(undefined2 *)(param_1 + 0xec);
  *(undefined4 *)(lVar4 + 0x54c) = uVar1;
  *(undefined2 *)(lVar4 + 0x550) = uVar2;
  *(undefined1 *)(lVar4 + 0x561) = *(undefined1 *)(param_1 + 0x104);
  uVar1 = *(undefined4 *)(param_1 + 0xfc);
  uVar2 = *(undefined2 *)(param_1 + 0x100);
  *(undefined2 *)(lVar4 + 0x554) = *(undefined2 *)(param_1 + 0xf8);
  *(undefined4 *)(lVar4 + 0x558) = uVar1;
  *(undefined2 *)(lVar4 + 0x55c) = uVar2;
  *(undefined1 *)(lVar4 + 0x561) = *(undefined1 *)(param_1 + 0x104);
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00edabf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


