/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121bcc0; name: FUN_0121bcc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0121bcc0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 **ppuVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  long lStack_28;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = (undefined1 *)*param_2;
  if (puVar5 != (undefined1 *)0x0) {
    if ((param_2[1] & 0x1fffffffffffffff) != 0) {
      *puVar5 = *param_1;
      uVar6 = (ulong)param_2[4] >> 3;
      *(byte *)(param_2[3] + uVar6) =
           *(byte *)(param_2[3] + uVar6) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
      puVar5 = (undefined1 *)*param_2;
      if (puVar5 == (undefined1 *)0x0) goto LAB_0121bf48;
    }
    if (0x107 < (ulong)(param_2[1] << 3)) {
      uVar7 = *(undefined8 *)(param_1 + 0x24);
      uVar8 = *(undefined8 *)(param_1 + 0x2c);
      *(undefined8 *)(puVar5 + 0x19) = *(undefined8 *)(param_1 + 0x34);
      *(undefined8 *)(puVar5 + 0x11) = uVar8;
      *(undefined8 *)(puVar5 + 9) = uVar7;
      uVar6 = param_2[4] + 9 >> 3;
      *(byte *)(param_2[3] + uVar6) =
           *(byte *)(param_2[3] + uVar6) | (byte)(1 << (ulong)((uint)(param_2[4] + 9) & 7));
      puVar5 = (undefined1 *)*param_2;
      if (puVar5 == (undefined1 *)0x0) goto LAB_0121bf48;
    }
    if (0x121 < (ulong)(param_2[1] << 3)) {
      if (*(int *)(param_1 + 0x40) != 0) {
        puVar5[0x24] = puVar5[0x24] | 2;
      }
      uVar6 = param_2[4] + 0xd >> 3;
      *(byte *)(param_2[3] + uVar6) =
           *(byte *)(param_2[3] + uVar6) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xd) & 7));
      puVar5 = (undefined1 *)*param_2;
      if (puVar5 == (undefined1 *)0x0) goto LAB_0121bf48;
    }
    if ((0x125 < (ulong)(param_2[1] << 3)) && (bVar2 = param_1[0x44], bVar2 < 0xb)) {
      if ((bVar2 & 1) != 0) {
        puVar5[0x24] = puVar5[0x24] | 4;
        bVar2 = param_1[0x44];
      }
      if ((bVar2 >> 1 & 1) != 0) {
        puVar5[0x24] = puVar5[0x24] | 8;
        bVar2 = param_1[0x44];
      }
      if ((bVar2 >> 2 & 1) != 0) {
        puVar5[0x24] = puVar5[0x24] | 0x10;
        bVar2 = param_1[0x44];
      }
      if ((bVar2 >> 3 & 1) != 0) {
        puVar5[0x24] = puVar5[0x24] | 0x20;
      }
      uVar6 = param_2[4] + 0xe >> 3;
      *(byte *)(param_2[3] + uVar6) =
           *(byte *)(param_2[3] + uVar6) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xe) & 7));
      puVar5 = (undefined1 *)*param_2;
      if (puVar5 == (undefined1 *)0x0) goto LAB_0121bf48;
    }
    if (0x10f < (ulong)(param_2[1] << 3)) {
      puVar5[0x21] = param_1[0x45];
      uVar6 = param_2[4] + 10 >> 3;
      *(byte *)(param_2[3] + uVar6) =
           *(byte *)(param_2[3] + uVar6) | (byte)(1 << (ulong)((uint)(param_2[4] + 10) & 7));
      puVar5 = (undefined1 *)*param_2;
      if (puVar5 == (undefined1 *)0x0) goto LAB_0121bf48;
    }
    if (0x11f < (ulong)(param_2[1] << 3)) {
      *(undefined2 *)(puVar5 + 0x22) = *(undefined2 *)(param_1 + 0x46);
      uVar6 = param_2[4] + 0xb >> 3;
      *(byte *)(param_2[3] + uVar6) =
           *(byte *)(param_2[3] + uVar6) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xb) & 7));
      puVar5 = (undefined1 *)*param_2;
      if (puVar5 == (undefined1 *)0x0) goto LAB_0121bf48;
    }
    if (0x120 < (ulong)(param_2[1] * 8)) {
      if (param_1[0x48] != '\0') {
        puVar5[0x24] = puVar5[0x24] | 1;
      }
      uVar6 = param_2[4] + 0xc >> 3;
      *(byte *)(param_2[3] + uVar6) =
           *(byte *)(param_2[3] + uVar6) | (byte)(1 << (ulong)((uint)(param_2[4] + 0xc) & 7));
      puVar5 = (undefined1 *)*param_2;
      if (puVar5 == (undefined1 *)0x0) goto LAB_0121bf48;
    }
    if (0x47 < (ulong)(param_2[1] << 3)) {
      local_30 = param_2[3];
      local_48 = puVar5 + 1;
      local_40 = 8;
      lStack_28 = param_2[4] + 1;
      bVar4 = true;
      local_38 = 0;
      local_50 = 1;
      FUN_01222660(&local_70);
      cVar3 = param_1[4];
      goto joined_r0x0121bf5c;
    }
  }
LAB_0121bf48:
  bVar4 = false;
  local_50 = 0;
  FUN_01222660(&local_70);
  cVar3 = param_1[4];
joined_r0x0121bf5c:
  if (cVar3 != '\0') {
    local_70 = *(undefined8 *)(param_1 + 8);
    local_68 = *(undefined8 *)(param_1 + 0x10);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    local_58 = param_1[0x20];
  }
  ppuVar1 = (undefined1 **)0x0;
  if (bVar4) {
    ppuVar1 = &local_48;
  }
  FUN_01222a50(&local_70,ppuVar1);
  return;
}


