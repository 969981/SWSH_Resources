/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c8d40; name: FUN_008c8d40
 */


void FUN_008c8d40(long param_1,uint param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x688),param_2 & 1);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x690),param_2 & 1);
  lVar3 = *(long *)(param_1 + 0x688);
  pcVar1 = *(code **)(lVar3 + 0x238);
  puVar8 = (undefined8 *)(lVar3 + 0x230);
  if ((param_2 & 1) == 0) {
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x240) = 0;
      *(undefined8 *)(lVar3 + 0x248) = 0;
      *puVar8 = 0;
      *(undefined8 *)(lVar3 + 0x238) = 0;
      (*pcVar1)(lVar3 + 0x250);
    }
    *(long *)(lVar3 + 0x250) = param_1;
    *puVar8 = &LAB_008ccb00;
    *(undefined1 **)(lVar3 + 0x238) = &LAB_008ccb20;
    *(undefined1 **)(lVar3 + 0x240) = &LAB_008ccb30;
    *(undefined1 **)(lVar3 + 0x248) = &LAB_008ccb40;
    lVar3 = *(long *)(param_1 + 0x690);
    pcVar1 = *(code **)(lVar3 + 0x238);
    puVar8 = (undefined8 *)(lVar3 + 0x230);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x240) = 0;
      *(undefined8 *)(lVar3 + 0x248) = 0;
      *puVar8 = 0;
      *(undefined8 *)(lVar3 + 0x238) = 0;
      (*pcVar1)(lVar3 + 0x250);
    }
    plVar7 = (long *)(lVar3 + 0x250);
    puVar5 = &LAB_008ccb70;
    puVar4 = &LAB_008ccb80;
    puVar2 = &LAB_008ccb90;
    puVar6 = &LAB_008ccb50;
  }
  else {
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x240) = 0;
      *(undefined8 *)(lVar3 + 0x248) = 0;
      *puVar8 = 0;
      *(undefined8 *)(lVar3 + 0x238) = 0;
      (*pcVar1)(lVar3 + 0x250);
    }
    *(long *)(lVar3 + 0x250) = param_1;
    *puVar8 = &LAB_008cca20;
    *(undefined1 **)(lVar3 + 0x238) = &LAB_008cca60;
    *(undefined1 **)(lVar3 + 0x240) = &LAB_008cca70;
    *(undefined1 **)(lVar3 + 0x248) = &LAB_008cca80;
    lVar3 = *(long *)(param_1 + 0x690);
    pcVar1 = *(code **)(lVar3 + 0x238);
    puVar8 = (undefined8 *)(lVar3 + 0x230);
    if (pcVar1 == (code *)0x0) {
      puVar2 = &LAB_008ccaf0;
      puVar4 = &LAB_008ccae0;
      puVar5 = &LAB_008ccad0;
      plVar7 = (long *)(lVar3 + 0x250);
      puVar6 = &LAB_008cca90;
    }
    else {
      plVar7 = (long *)(lVar3 + 0x250);
      *(undefined8 *)(lVar3 + 0x240) = 0;
      *(undefined8 *)(lVar3 + 0x248) = 0;
      *puVar8 = 0;
      *(undefined8 *)(lVar3 + 0x238) = 0;
      (*pcVar1)(plVar7);
      puVar2 = &LAB_008ccaf0;
      puVar4 = &LAB_008ccae0;
      puVar5 = &LAB_008ccad0;
      puVar6 = &LAB_008cca90;
    }
  }
  *plVar7 = param_1;
  *puVar8 = puVar6;
  puVar8[1] = puVar5;
  puVar8[2] = puVar4;
  puVar8[3] = puVar2;
  return;
}


