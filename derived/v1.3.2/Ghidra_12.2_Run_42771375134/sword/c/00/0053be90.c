/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053be90; name: FUN_0053be90
 */


undefined8
FUN_0053be90(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long local_48;
  
  uVar1 = FUN_00523210();
  plVar4 = (long *)(param_1 + 0xe0);
  plVar5 = (long *)*plVar4;
  if (plVar5 == (long *)0x0) {
LAB_0053bf08:
    local_48 = 0;
  }
  else {
    plVar3 = plVar4;
    do {
      if ((ulong)plVar5[4] >= uVar1) {
        plVar3 = plVar5;
      }
      plVar5 = (long *)plVar5[(ulong)plVar5[4] < uVar1];
    } while (plVar5 != (long *)0x0);
    if ((plVar3 == plVar4) || (uVar1 < (ulong)plVar3[4])) goto LAB_0053bf08;
    local_48 = plVar3[5];
    if (local_48 != 0) goto LAB_0053bf34;
  }
  uVar2 = FUN_00539890(param_1,uVar1,param_4,param_5,param_6,param_7,param_8,&local_48);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
LAB_0053bf34:
  *(undefined8 *)(param_1 + 0x1168) = 0;
  *(long *)(param_1 + 0x120) = local_48;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  return 0;
}


