/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00519600; name: FUN_00519600
 */


void FUN_00519600(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  FUN_00519740(param_1,0);
  if (*(long *)(param_1 + 0x1238) != 0) {
    plVar2 = *(long **)(param_1 + 0x1230);
    lVar3 = *(long *)(param_1 + 0x1228);
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = *plVar2;
    *(undefined8 *)(param_1 + 0x1238) = 0;
    puVar1 = PTR_PTR_02713988;
    while (plVar2 != (long *)(param_1 + 0x1228)) {
      plVar2 = (long *)plVar2[1];
      FUN_005b9b10(*(undefined8 *)puVar1);
    }
  }
  if (*(long *)(param_1 + 0x1220) != 0) {
    plVar2 = *(long **)(param_1 + 0x1218);
    lVar3 = *(long *)(param_1 + 0x1210);
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = *plVar2;
    *(undefined8 *)(param_1 + 0x1220) = 0;
    puVar1 = PTR_PTR_02713988;
    while (plVar2 != (long *)(param_1 + 0x1210)) {
      plVar2 = (long *)plVar2[1];
      FUN_005b9b10(*(undefined8 *)puVar1);
    }
  }
  FUN_0053c450(param_1 + 0x11e8,*(undefined8 *)(param_1 + 0x11f0));
  FUN_0053c4a0(param_1 + 0x11d0,*(undefined8 *)(param_1 + 0x11d8));
  *(undefined **)(param_1 + 0x1178) = PTR_DAT_027139a8 + 0x10;
  FUN_005bf750(param_1 + 0x1180);
  FUN_0053c4f0(param_1 + 0x108,*(undefined8 *)(param_1 + 0x110));
  FUN_0053c540(param_1 + 0xf0,*(undefined8 *)(param_1 + 0xf8));
  FUN_0053c590(param_1 + 0xd8,*(undefined8 *)(param_1 + 0xe0));
  return;
}


