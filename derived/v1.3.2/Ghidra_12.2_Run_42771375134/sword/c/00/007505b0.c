/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007505b0; name: FUN_007505b0
 */


void FUN_007505b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02710a48;
  *(undefined **)(param_1 + 0x140) = PTR_DAT_02710a48 + 0x10;
  if (*(long *)(param_1 + 0x148) == 0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    pcVar3 = *(code **)(param_1 + 0x1d8);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x148),param_1 + 0x140);
    lVar2 = *(long *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = *(code **)(param_1 + 0x1d8);
  }
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    (*pcVar3)(param_1 + 0x1f0);
  }
  pcVar3 = *(code **)(param_1 + 0x158);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar3)(param_1 + 0x170);
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x148) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  *(undefined **)(param_1 + 0x10) = puVar1 + 0x10;
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    pcVar3 = *(code **)(param_1 + 0xa8);
  }
  else {
    FUN_006e2100();
    lVar2 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = *(code **)(param_1 + 0xa8);
  }
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (*pcVar3)(param_1 + 0xc0);
  }
  pcVar3 = *(code **)(param_1 + 0x28);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    (*pcVar3)(param_1 + 0x40);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


