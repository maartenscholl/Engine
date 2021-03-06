// Autogenerated by cmake
// Do not edit

#ifdef BOOST_MSVC
#  include <ored/auto_link.hpp>
#endif

#include <ored/configuration/basecorrelationcurveconfig.hpp>
#include <ored/configuration/capfloorvolcurveconfig.hpp>
#include <ored/configuration/cdsvolcurveconfig.hpp>
#include <ored/configuration/commoditycurveconfig.hpp>
#include <ored/configuration/commodityvolcurveconfig.hpp>
#include <ored/configuration/conventions.hpp>
#include <ored/configuration/correlationcurveconfig.hpp>
#include <ored/configuration/curveconfig.hpp>
#include <ored/configuration/curveconfigurations.hpp>
#include <ored/configuration/defaultcurveconfig.hpp>
#include <ored/configuration/equitycurveconfig.hpp>
#include <ored/configuration/equityvolcurveconfig.hpp>
#include <ored/configuration/fxspotconfig.hpp>
#include <ored/configuration/fxvolcurveconfig.hpp>
#include <ored/configuration/inflationcapfloorpricesurfaceconfig.hpp>
#include <ored/configuration/inflationcapfloorvolcurveconfig.hpp>
#include <ored/configuration/inflationcurveconfig.hpp>
#include <ored/configuration/securityconfig.hpp>
#include <ored/configuration/swaptionvolcurveconfig.hpp>
#include <ored/configuration/yieldcurveconfig.hpp>
#include <ored/marketdata/basecorrelationcurve.hpp>
#include <ored/marketdata/capfloorvolcurve.hpp>
#include <ored/marketdata/cdsvolcurve.hpp>
#include <ored/marketdata/commoditycurve.hpp>
#include <ored/marketdata/commodityvolcurve.hpp>
#include <ored/marketdata/correlationcurve.hpp>
#include <ored/marketdata/csvloader.hpp>
#include <ored/marketdata/curveloader.hpp>
#include <ored/marketdata/curvespec.hpp>
#include <ored/marketdata/curvespecparser.hpp>
#include <ored/marketdata/defaultcurve.hpp>
#include <ored/marketdata/equitycurve.hpp>
#include <ored/marketdata/equityvolcurve.hpp>
#include <ored/marketdata/fixings.hpp>
#include <ored/marketdata/fxspot.hpp>
#include <ored/marketdata/fxtriangulation.hpp>
#include <ored/marketdata/fxvolcurve.hpp>
#include <ored/marketdata/inflationcapfloorpricesurface.hpp>
#include <ored/marketdata/inflationcapfloorvolcurve.hpp>
#include <ored/marketdata/inflationcurve.hpp>
#include <ored/marketdata/inmemoryloader.hpp>
#include <ored/marketdata/loader.hpp>
#include <ored/marketdata/market.hpp>
#include <ored/marketdata/marketdatum.hpp>
#include <ored/marketdata/marketdatumparser.hpp>
#include <ored/marketdata/marketimpl.hpp>
#include <ored/marketdata/security.hpp>
#include <ored/marketdata/swaptionvolcurve.hpp>
#include <ored/marketdata/todaysmarket.hpp>
#include <ored/marketdata/todaysmarketparameters.hpp>
#include <ored/marketdata/yieldcurve.hpp>
#include <ored/model/crossassetmodelbuilder.hpp>
#include <ored/model/crossassetmodeldata.hpp>
#include <ored/model/eqbsbuilder.hpp>
#include <ored/model/eqbsdata.hpp>
#include <ored/model/fxbsbuilder.hpp>
#include <ored/model/fxbsdata.hpp>
#include <ored/model/infdkbuilder.hpp>
#include <ored/model/infdkdata.hpp>
#include <ored/model/irlgmdata.hpp>
#include <ored/model/lgmbuilder.hpp>
#include <ored/model/lgmdata.hpp>
#include <ored/model/modelbuilder.hpp>
#include <ored/model/utilities.hpp>
#include <ored/portfolio/bond.hpp>
#include <ored/portfolio/builders/bond.hpp>
#include <ored/portfolio/builders/cachingenginebuilder.hpp>
#include <ored/portfolio/builders/capfloor.hpp>
#include <ored/portfolio/builders/capfloorediborleg.hpp>
#include <ored/portfolio/builders/cms.hpp>
#include <ored/portfolio/builders/cmsspread.hpp>
#include <ored/portfolio/builders/commodityforward.hpp>
#include <ored/portfolio/builders/commodityoption.hpp>
#include <ored/portfolio/builders/creditdefaultswap.hpp>
#include <ored/portfolio/builders/equityforward.hpp>
#include <ored/portfolio/builders/equityoption.hpp>
#include <ored/portfolio/builders/fxforward.hpp>
#include <ored/portfolio/builders/fxoption.hpp>
#include <ored/portfolio/builders/swap.hpp>
#include <ored/portfolio/builders/swaption.hpp>
#include <ored/portfolio/builders/yoycapfloor.hpp>
#include <ored/portfolio/capfloor.hpp>
#include <ored/portfolio/commodityforward.hpp>
#include <ored/portfolio/commodityoption.hpp>
#include <ored/portfolio/creditdefaultswap.hpp>
#include <ored/portfolio/creditdefaultswapdata.hpp>
#include <ored/portfolio/enginedata.hpp>
#include <ored/portfolio/enginefactory.hpp>
#include <ored/portfolio/envelope.hpp>
#include <ored/portfolio/equityforward.hpp>
#include <ored/portfolio/equityoption.hpp>
#include <ored/portfolio/equityswap.hpp>
#include <ored/portfolio/forwardrateagreement.hpp>
#include <ored/portfolio/fxforward.hpp>
#include <ored/portfolio/fxoption.hpp>
#include <ored/portfolio/fxswap.hpp>
#include <ored/portfolio/instrumentwrapper.hpp>
#include <ored/portfolio/legbuilders.hpp>
#include <ored/portfolio/legdata.hpp>
#include <ored/portfolio/nettingsetdefinition.hpp>
#include <ored/portfolio/nettingsetmanager.hpp>
#include <ored/portfolio/optiondata.hpp>
#include <ored/portfolio/optionwrapper.hpp>
#include <ored/portfolio/portfolio.hpp>
#include <ored/portfolio/schedule.hpp>
#include <ored/portfolio/swap.hpp>
#include <ored/portfolio/swaption.hpp>
#include <ored/portfolio/trade.hpp>
#include <ored/portfolio/tradeactions.hpp>
#include <ored/portfolio/tradefactory.hpp>
#include <ored/report/csvreport.hpp>
#include <ored/report/inmemoryreport.hpp>
#include <ored/report/report.hpp>
#include <ored/utilities/correlationmatrix.hpp>
#include <ored/utilities/csvfilereader.hpp>
#include <ored/utilities/currencycheck.hpp>
#include <ored/utilities/flowanalysis.hpp>
#include <ored/utilities/indexparser.hpp>
#include <ored/utilities/log.hpp>
#include <ored/utilities/osutils.hpp>
#include <ored/utilities/parsers.hpp>
#include <ored/utilities/progressbar.hpp>
#include <ored/utilities/serializationdate.hpp>
#include <ored/utilities/strike.hpp>
#include <ored/utilities/timeperiod.hpp>
#include <ored/utilities/to_string.hpp>
#include <ored/utilities/vectorutils.hpp>
#include <ored/utilities/xmlutils.hpp>
#include <ored/version.hpp>
