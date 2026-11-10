/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120f240; name: FUN_0120f240
 */


void FUN_0120f240(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  char local_278 [8];
  char local_270;
  undefined8 local_268;
  char local_260;
  char local_25f;
  undefined2 local_25e;
  undefined4 local_25c;
  undefined4 *local_258;
  char local_250 [528];
  
  FUN_012195e0(local_250,param_2);
  FUN_0120f500(&local_258,param_1,0,local_250);
  if (local_258 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 0x18))(local_278,param_2);
  puVar2 = local_258;
  if (local_278[0] != '\0') {
    local_25c = FUN_007c1bc0((ulong)local_278 | 4);
    local_260 = '\x01';
    FUN_01225f60(puVar2,&local_260);
    puVar2 = local_258;
    local_25e = FUN_007c1bd0((ulong)local_278 | 4);
    local_260 = '\x01';
    FUN_01225f70(puVar2,&local_260);
    if (local_278[0] != '\0') {
      local_278[0] = '\0';
    }
  }
  FUN_01225f80(local_258);
  FUN_01219750(local_278,param_2);
  puVar2 = local_258;
  if (local_278[0] == '\0') {
    FUN_01219800(&local_260,param_2);
    puVar2 = local_258;
    if (local_260 == '\0') {
      return;
    }
    *local_258 = 0;
    if (*(char *)(local_258 + 4) == '\0') {
      if (local_25f == '\0') {
        return;
      }
LAB_0120f414:
      *(undefined1 *)(puVar2 + 4) = 1;
    }
    else {
      if (local_25f != '\0') {
        uVar3 = FUN_0121ace0((long)local_258 + 0x11,(ulong)&local_260 | 2);
        if ((uVar3 & 1) != 0) {
          return;
        }
        if (*(char *)(puVar2 + 4) == '\0') {
          if (local_25f == '\0') goto LAB_0120f41c;
          goto LAB_0120f414;
        }
        if (local_25f != '\0') goto LAB_0120f41c;
      }
      *(undefined1 *)(puVar2 + 4) = 0;
    }
LAB_0120f41c:
    FUN_01225e20(puVar2);
    uVar4 = FUN_01225e50(local_258);
    FUN_01218d90(param_1 + 0xc0,uVar4);
    return;
  }
  *local_258 = 0;
  if (*(char *)(local_258 + 6) == '\0') {
    if (local_270 == '\0') {
      return;
    }
LAB_0120f3cc:
    *(undefined8 *)(puVar2 + 8) = local_268;
    *(undefined1 *)(puVar2 + 6) = 1;
  }
  else {
    if (local_270 != '\0') {
      puVar1 = (undefined8 *)(local_258 + 8);
      uVar3 = FUN_0121ac60(puVar1,&local_268);
      if ((uVar3 & 1) != 0) {
        return;
      }
      if (*(char *)(puVar2 + 6) == '\0') {
        if (local_270 == '\0') goto LAB_0120f3e4;
        goto LAB_0120f3cc;
      }
      if (local_270 != '\0') {
        *puVar1 = local_268;
        goto LAB_0120f3e4;
      }
    }
    *(undefined1 *)(puVar2 + 6) = 0;
  }
LAB_0120f3e4:
  FUN_01225e20(puVar2);
  uVar4 = FUN_01225e50(local_258);
  FUN_01218d90(param_1 + 0xc0,uVar4);
  return;
}


