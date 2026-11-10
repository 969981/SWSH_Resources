/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00775ba0; name: FUN_00775ba0
 */


void FUN_00775ba0(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_027161a8;
  (**(code **)(*(long *)param_1[0x10] + 0x58))
            ((long *)param_1[0x10],*(undefined8 *)PTR_DAT_027161a8);
  (**(code **)(*(long *)param_1[0x14] + 0x30))((long *)param_1[0x14],*(undefined8 *)puVar1);
  if (*(char *)(param_1 + 0x20) != '\0') {
    (**(code **)(*(long *)param_1[0xc] + 0x20))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  uVar2 = (**(code **)(*(long *)param_1[0x10] + 0x18))();
  if ((uVar2 & 1) != 0) {
    (**(code **)(*(long *)param_1[0x10] + 0x38))();
  }
  if (*(char *)((long)param_1 + 0x102) != '\0') {
    (**(code **)(*(long *)*param_1 + 0x28))();
    (*(code *)**(undefined8 **)param_1[0x18])();
    *(undefined1 *)((long)param_1 + 0x102) = 0;
  }
  uVar2 = (**(code **)(*(long *)param_1[8] + 0x10))();
  if ((uVar2 & 1) != 0) {
    (**(code **)(*(long *)param_1[8] + 0x18))();
  }
  lVar3 = param_1[4];
  param_1[4] = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_0077b8a0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00775ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar3,param_1[6],param_1[7]);
  return;
}


