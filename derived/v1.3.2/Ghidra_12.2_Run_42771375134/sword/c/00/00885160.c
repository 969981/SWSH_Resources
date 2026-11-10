/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885160; name: FUN_00885160
 */


void FUN_00885160(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  plVar1 = (long *)(**(code **)(*param_1 + 0x50))(param_1,0);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  (**(code **)(*param_1 + 0x50))(param_1,0);
  uVar2 = FUN_008787d0();
  if ((uVar2 & 1) == 0) {
    *(char *)(param_1 + 0x11) = (char)param_1[0x11] + '\x01';
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x50))(param_1,1);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2 + 0x158);
  (**(code **)(*param_1 + 0x50))(param_1,1);
  uVar2 = FUN_008787d0();
  if ((uVar2 & 1) == 0) {
    *(char *)(param_1 + 0x11) = (char)param_1[0x11] + '\x01';
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x50))(param_1,2);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2 + 0x2b0);
  (**(code **)(*param_1 + 0x50))(param_1,2);
  uVar2 = FUN_008787d0();
  if ((uVar2 & 1) == 0) {
    *(char *)(param_1 + 0x11) = (char)param_1[0x11] + '\x01';
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x50))(param_1,3);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2 + 0x408);
  (**(code **)(*param_1 + 0x50))(param_1,3);
  uVar2 = FUN_008787d0();
  if ((uVar2 & 1) == 0) {
    *(char *)(param_1 + 0x11) = (char)param_1[0x11] + '\x01';
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x50))(param_1,4);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2 + 0x560);
  (**(code **)(*param_1 + 0x50))(param_1,4);
  uVar2 = FUN_008787d0();
  if ((uVar2 & 1) == 0) {
    *(char *)(param_1 + 0x11) = (char)param_1[0x11] + '\x01';
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x50))(param_1,5);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2 + 0x6b8);
  (**(code **)(*param_1 + 0x50))(param_1,5);
  uVar2 = FUN_008787d0();
  if ((uVar2 & 1) == 0) {
    *(char *)(param_1 + 0x11) = (char)param_1[0x11] + '\x01';
  }
  return;
}


