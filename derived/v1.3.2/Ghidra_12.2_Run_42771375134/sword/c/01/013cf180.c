/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013cf180; name: FUN_013cf180
 */


void FUN_013cf180(long param_1,int param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) {
    cVar1 = *(char *)(param_1 + 0x84);
  }
  else {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_0132d9a0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar5 = puVar5 + -10;
        if (*(char *)(param_1 + 0x84) == '\0') goto LAB_013cf1e0;
        goto joined_r0x013cf2b4;
      }
    }
    cVar1 = *(char *)(param_1 + 0x84);
  }
  puVar5 = (undefined8 *)0x0;
  if (cVar1 != '\0') goto joined_r0x013cf2b4;
LAB_013cf1e0:
  uVar4 = FUN_01363360(*(undefined8 *)(param_1 + 0x98));
  if ((uVar4 & 1) == 0) goto joined_r0x013cf2b4;
  uVar4 = FUN_012d62d0(1);
  if ((uVar4 & 1) == 0) {
LAB_013cf214:
    uVar4 = FUN_012d63e0(1);
  }
  else {
    if (*(char *)(puVar5 + 0xc9) != '\0') {
      *(undefined1 *)(puVar5 + 0xc9) = 0;
      FUN_013634c0(*(undefined8 *)(param_1 + 0x98),1,0);
      goto LAB_013cf214;
    }
    FUN_013637e0(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_012d63e0(1);
  }
  if ((uVar4 & 1) != 0) {
    if (*(char *)(puVar5 + 0xc9) == '\0') {
      *(undefined1 *)(puVar5 + 0xc9) = 1;
      FUN_013634c0(*(undefined8 *)(param_1 + 0x98),1,1);
    }
    else {
      FUN_013637e0(*(undefined8 *)(param_1 + 0x98));
    }
  }
joined_r0x013cf2b4:
  if (param_2 < 0) {
    return;
  }
  FUN_013634c0(*(undefined8 *)(param_1 + 0x98),param_2 == 0,*(undefined1 *)(puVar5 + 0xc9));
  return;
}


