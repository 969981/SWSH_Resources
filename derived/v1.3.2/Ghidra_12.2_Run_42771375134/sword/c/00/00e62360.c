/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e62360; name: FUN_00e62360
 */


void FUN_00e62360(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined8 auStack_90 [12];
  
  lVar1 = FUN_00e637f0(param_1,&local_b0);
  if (lVar1 == 0) {
    return;
  }
  local_b0 = &LAB_00e63a70;
  local_a8 = FUN_00e63b00;
  local_a0 = FUN_00e63b10;
  local_98 = &LAB_00e63b20;
  pcVar2 = *(code **)(lVar1 + 0x88);
  auStack_90[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    (*pcVar2)(lVar1 + 0xa0);
    if (local_a0 == (code *)0x0) goto LAB_00e62410;
  }
  (*local_a0)(auStack_90,lVar1 + 0xa0);
  *(undefined1 **)(lVar1 + 0x98) = local_98;
  *(code **)(lVar1 + 0x88) = local_a8;
  *(code **)(lVar1 + 0x90) = local_a0;
  *(undefined8 *)(lVar1 + 0x80) = local_b0;
LAB_00e62410:
  pcVar2 = local_a8;
  *(undefined8 *)(lVar1 + 0x180) = 0;
  *(undefined8 *)(lVar1 + 0x188) = 0;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  return;
}


